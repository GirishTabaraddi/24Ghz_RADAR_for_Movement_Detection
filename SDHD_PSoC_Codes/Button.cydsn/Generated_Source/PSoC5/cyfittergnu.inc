/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Pin_Button */
.set Pin_Button__0__INTTYPE, CYREG_PICU15_INTTYPE5
.set Pin_Button__0__MASK, 0x20
.set Pin_Button__0__PC, CYREG_IO_PC_PRT15_PC5
.set Pin_Button__0__PORT, 15
.set Pin_Button__0__SHIFT, 5
.set Pin_Button__AG, CYREG_PRT15_AG
.set Pin_Button__AMUX, CYREG_PRT15_AMUX
.set Pin_Button__BIE, CYREG_PRT15_BIE
.set Pin_Button__BIT_MASK, CYREG_PRT15_BIT_MASK
.set Pin_Button__BYP, CYREG_PRT15_BYP
.set Pin_Button__CTL, CYREG_PRT15_CTL
.set Pin_Button__DM0, CYREG_PRT15_DM0
.set Pin_Button__DM1, CYREG_PRT15_DM1
.set Pin_Button__DM2, CYREG_PRT15_DM2
.set Pin_Button__DR, CYREG_PRT15_DR
.set Pin_Button__INP_DIS, CYREG_PRT15_INP_DIS
.set Pin_Button__INTSTAT, CYREG_PICU15_INTSTAT
.set Pin_Button__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU15_BASE
.set Pin_Button__LCD_COM_SEG, CYREG_PRT15_LCD_COM_SEG
.set Pin_Button__LCD_EN, CYREG_PRT15_LCD_EN
.set Pin_Button__MASK, 0x20
.set Pin_Button__PORT, 15
.set Pin_Button__PRT, CYREG_PRT15_PRT
.set Pin_Button__PRTDSI__CAPS_SEL, CYREG_PRT15_CAPS_SEL
.set Pin_Button__PRTDSI__DBL_SYNC_IN, CYREG_PRT15_DBL_SYNC_IN
.set Pin_Button__PRTDSI__OE_SEL0, CYREG_PRT15_OE_SEL0
.set Pin_Button__PRTDSI__OE_SEL1, CYREG_PRT15_OE_SEL1
.set Pin_Button__PRTDSI__OUT_SEL0, CYREG_PRT15_OUT_SEL0
.set Pin_Button__PRTDSI__OUT_SEL1, CYREG_PRT15_OUT_SEL1
.set Pin_Button__PRTDSI__SYNC_OUT, CYREG_PRT15_SYNC_OUT
.set Pin_Button__PS, CYREG_PRT15_PS
.set Pin_Button__SHIFT, 5
.set Pin_Button__SLW, CYREG_PRT15_SLW
.set Pin_Button__SNAP, CYREG_PICU_15_SNAP_15

/* isr_Button */
.set isr_Button__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_Button__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_Button__INTC_MASK, 0x1000
.set isr_Button__INTC_NUMBER, 12
.set isr_Button__INTC_PRIOR_NUM, 7
.set isr_Button__INTC_PRIOR_REG, CYREG_NVIC_PRI_12
.set isr_Button__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_Button__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Pin_RED_LED */
.set Pin_RED_LED__0__INTTYPE, CYREG_PICU12_INTTYPE1
.set Pin_RED_LED__0__MASK, 0x02
.set Pin_RED_LED__0__PC, CYREG_PRT12_PC1
.set Pin_RED_LED__0__PORT, 12
.set Pin_RED_LED__0__SHIFT, 1
.set Pin_RED_LED__AG, CYREG_PRT12_AG
.set Pin_RED_LED__BIE, CYREG_PRT12_BIE
.set Pin_RED_LED__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Pin_RED_LED__BYP, CYREG_PRT12_BYP
.set Pin_RED_LED__DM0, CYREG_PRT12_DM0
.set Pin_RED_LED__DM1, CYREG_PRT12_DM1
.set Pin_RED_LED__DM2, CYREG_PRT12_DM2
.set Pin_RED_LED__DR, CYREG_PRT12_DR
.set Pin_RED_LED__INP_DIS, CYREG_PRT12_INP_DIS
.set Pin_RED_LED__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Pin_RED_LED__MASK, 0x02
.set Pin_RED_LED__PORT, 12
.set Pin_RED_LED__PRT, CYREG_PRT12_PRT
.set Pin_RED_LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Pin_RED_LED__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Pin_RED_LED__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Pin_RED_LED__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Pin_RED_LED__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Pin_RED_LED__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Pin_RED_LED__PS, CYREG_PRT12_PS
.set Pin_RED_LED__SHIFT, 1
.set Pin_RED_LED__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Pin_RED_LED__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Pin_RED_LED__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Pin_RED_LED__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Pin_RED_LED__SLW, CYREG_PRT12_SLW

/* Pin_GREEN_LED */
.set Pin_GREEN_LED__0__INTTYPE, CYREG_PICU12_INTTYPE0
.set Pin_GREEN_LED__0__MASK, 0x01
.set Pin_GREEN_LED__0__PC, CYREG_PRT12_PC0
.set Pin_GREEN_LED__0__PORT, 12
.set Pin_GREEN_LED__0__SHIFT, 0
.set Pin_GREEN_LED__AG, CYREG_PRT12_AG
.set Pin_GREEN_LED__BIE, CYREG_PRT12_BIE
.set Pin_GREEN_LED__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Pin_GREEN_LED__BYP, CYREG_PRT12_BYP
.set Pin_GREEN_LED__DM0, CYREG_PRT12_DM0
.set Pin_GREEN_LED__DM1, CYREG_PRT12_DM1
.set Pin_GREEN_LED__DM2, CYREG_PRT12_DM2
.set Pin_GREEN_LED__DR, CYREG_PRT12_DR
.set Pin_GREEN_LED__INP_DIS, CYREG_PRT12_INP_DIS
.set Pin_GREEN_LED__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Pin_GREEN_LED__MASK, 0x01
.set Pin_GREEN_LED__PORT, 12
.set Pin_GREEN_LED__PRT, CYREG_PRT12_PRT
.set Pin_GREEN_LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Pin_GREEN_LED__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Pin_GREEN_LED__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Pin_GREEN_LED__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Pin_GREEN_LED__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Pin_GREEN_LED__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Pin_GREEN_LED__PS, CYREG_PRT12_PS
.set Pin_GREEN_LED__SHIFT, 0
.set Pin_GREEN_LED__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Pin_GREEN_LED__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Pin_GREEN_LED__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Pin_GREEN_LED__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Pin_GREEN_LED__SLW, CYREG_PRT12_SLW

/* Pin_YELLOW_LED */
.set Pin_YELLOW_LED__0__INTTYPE, CYREG_PICU12_INTTYPE2
.set Pin_YELLOW_LED__0__MASK, 0x04
.set Pin_YELLOW_LED__0__PC, CYREG_PRT12_PC2
.set Pin_YELLOW_LED__0__PORT, 12
.set Pin_YELLOW_LED__0__SHIFT, 2
.set Pin_YELLOW_LED__AG, CYREG_PRT12_AG
.set Pin_YELLOW_LED__BIE, CYREG_PRT12_BIE
.set Pin_YELLOW_LED__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Pin_YELLOW_LED__BYP, CYREG_PRT12_BYP
.set Pin_YELLOW_LED__DM0, CYREG_PRT12_DM0
.set Pin_YELLOW_LED__DM1, CYREG_PRT12_DM1
.set Pin_YELLOW_LED__DM2, CYREG_PRT12_DM2
.set Pin_YELLOW_LED__DR, CYREG_PRT12_DR
.set Pin_YELLOW_LED__INP_DIS, CYREG_PRT12_INP_DIS
.set Pin_YELLOW_LED__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Pin_YELLOW_LED__MASK, 0x04
.set Pin_YELLOW_LED__PORT, 12
.set Pin_YELLOW_LED__PRT, CYREG_PRT12_PRT
.set Pin_YELLOW_LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Pin_YELLOW_LED__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Pin_YELLOW_LED__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Pin_YELLOW_LED__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Pin_YELLOW_LED__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Pin_YELLOW_LED__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Pin_YELLOW_LED__PS, CYREG_PRT12_PS
.set Pin_YELLOW_LED__SHIFT, 2
.set Pin_YELLOW_LED__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Pin_YELLOW_LED__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Pin_YELLOW_LED__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Pin_YELLOW_LED__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Pin_YELLOW_LED__SLW, CYREG_PRT12_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 26
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E160069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 26
.set CYDEV_CHIP_MEMBER_4AA, 25
.set CYDEV_CHIP_MEMBER_4AB, 30
.set CYDEV_CHIP_MEMBER_4AC, 14
.set CYDEV_CHIP_MEMBER_4AD, 15
.set CYDEV_CHIP_MEMBER_4AE, 16
.set CYDEV_CHIP_MEMBER_4D, 20
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 27
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 24
.set CYDEV_CHIP_MEMBER_4I, 32
.set CYDEV_CHIP_MEMBER_4J, 21
.set CYDEV_CHIP_MEMBER_4K, 22
.set CYDEV_CHIP_MEMBER_4L, 31
.set CYDEV_CHIP_MEMBER_4M, 29
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 28
.set CYDEV_CHIP_MEMBER_4Q, 17
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 23
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 18
.set CYDEV_CHIP_MEMBER_4Z, 19
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 33
.set CYDEV_CHIP_MEMBER_FM3, 37
.set CYDEV_CHIP_MEMBER_FM4, 38
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 34
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 35
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 36
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4AA_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AB_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AC_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AD_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AE_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Z_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif