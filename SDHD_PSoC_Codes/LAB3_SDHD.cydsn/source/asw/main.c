/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <stdio.h>
#include <stdlib.h>
#include "project.h"
#include "logging.h"

volatile uint8 toggle = 0;

CY_ISR_PROTO(isr_button_RisingEdge_Interrupt);

CY_ISR_PROTO(isr_UART);

typedef enum
{
    IDLE_STATE,
    SAMPLING_STATE,
    UART_TRANSFER_STATE

}STATE_t;

uint8_t sChRx = 0;
uint8_t oChRx = 0;
char rxDataCh;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    isr_button_StartEx(isr_button_RisingEdge_Interrupt);
    isr_UART_StartEx(isr_UART);
    
    //Hardware Init
    UART_LOG_Start();
    WaveDAC8_Start();
    //WaveDAC8_Enable();
    ADC_Start();
    ADC_StartConvert();
    
    //char buffer[100];
    
    uint8_t count = 0;
    uint16_t ADC_Array[1024] = {0};
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    //Initializing the state to IDLE_STATE.
    STATE_t POS = IDLE_STATE;
 
    for(; ;)
    {
        switch(POS)
        {
            case IDLE_STATE:
                //Initializing count to 0;
                count = 0;
                if(toggle == 1)
                {
                    POS = SAMPLING_STATE;
                    toggle = 0;
                }
            break;
            
            case SAMPLING_STATE:
                for(int i = 0; i < 1024; i++)
                {
                    ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
                    
                 //   int32 ADC_result = ADC_GetResult32();
        //            ADC_Array[i] = (uint16_t)ADC_CountsTo_mVolts(ADC_result);
                    ADC_Array[i] = (uint16_t)ADC_GetResult32();
//                    itoa(ADC_result_mV, buffer, 10);
//                    UART_LOG_PutString(buffer);
//                    UART_LOG_PutString("\n");
                }
                
//                if(UART_LOG_GetChar() == 's')
//                {
//                    Red_LED_Write(1);
//                    POS = UART_TRANSFER_STATE;
//                }
                         
                if(sChRx)
                {
                 //   UART_LOG_PutString("I received S \n");
                    Red_LED_Write(1);
                    POS = UART_TRANSFER_STATE;
                    sChRx = 0;
                }
            break;
            
            case UART_TRANSFER_STATE:
                for(int i = 0; i < 1024; i++)
                {
                    UART_LOG_PutChar(ADC_Array[i]);
                    UART_LOG_PutChar(ADC_Array[i]>>8);
                }
                count++;
                
//                if((count < 10) && UART_LOG_GetChar() == 'o')
//                {
//                    POS = SAMPLING_STATE;
//                    Red_LED_Write(0);
//                }
//                else if((count == 10) && UART_LOG_GetChar() == 'o')
//                {
//                    POS = IDLE_STATE;  
//                }
                
                if((count < 10) && oChRx)
                {
                    POS = SAMPLING_STATE;
                    Red_LED_Write(0);
                    oChRx = 0;
                }
                else if((count == 10) && oChRx)
                {
                    POS = IDLE_STATE;  
                    oChRx = 0;
                }
            break;
            
            default:
            break;
        }
    }
}
    
/**
*This interrupt service routine will be called whenever a Button 1 rising edge interrupt occurs.
**/
CY_ISR(isr_button_RisingEdge_Interrupt)
{
    Push_button_ClearInterrupt();
    
    if(toggle == 0)
    {
        toggle = 1;
    }
}

CY_ISR(isr_UART)
{
    rxDataCh = UART_LOG_GetChar();
    if(rxDataCh == 's')
    {
       // UART_LOG_PutString("S is sent \n");
        sChRx = 1;
    }
    if(rxDataCh == 'o')
    {
        oChRx = 1;
    }
}
/* [] END OF FILE */
