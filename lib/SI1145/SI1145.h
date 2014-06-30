/*
 * SI1145.h
 */

/******************************************/
/******** Accessible I2C Registers ********/
/******************************************/
#define SI1145_REG_PART_ID						0x00
#define SI1145_REG_REV_ID						0x01
#define SI1145_REG_SEQ_ID						0x02
#define SI1145_REG_INT_CFG						0x03
#define SI1145_REG_IRQ_ENABLE					0x04
#define SI1145_REG_HW_KEY						0x07
#define SI1145_REG_MEAS_RATE0					0x08
#define SI1145_REG_MEAS_RATE1					0x09
#define SI1145_REG_PS_RATE						0x0A
#define SI1145_REG_PS_LED21						0x0F
#define SI1145_REG_PS_LED3						0x10
#define SI1145_REG_UCOEF0						0x13
#define SI1145_REG_UCOEF1						0x14
#define SI1145_REG_UCOEF2						0x15
#define SI1145_REG_UCOEF3						0x16
#define SI1145_REG_PARAM_WR						0x17
#define SI1145_REG_COMMAND						0x18
#define SI1145_REG_RESPONSE						0x20
#define SI1145_REG_IRQ_STATUS					0x21
#define SI1145_REG_ALS_VIS_DATA0				0x22
#define SI1145_REG_ALS_VIS_DATA1				0x23
#define SI1145_REG_ALS_IR_DATA0					0x24
#define SI1145_REG_ALS_IR_DATA1					0x25
#define SI1145_REG_PS1_DATA0					0x26
#define SI1145_REG_PS1_DATA1					0x27
#define SI1145_REG_PS2_DATA0					0x28
#define SI1145_REG_PS2_DATA1					0x29
#define SI1145_REG_PS3_DATA0					0x2A
#define SI1145_REG_PS3_DATA1					0x2B
#define SI1145_REG_UVINDEX0						0x2C
#define SI1145_REG_UVINDEX1						0x2D
#define SI1145_REG_PARAM_RD						0x2E
#define SI1145_REG_CHIP_STAT					0x30
#define SI1145_REG_ANA_IN_KEY_0					0x3B
#define SI1145_REG_ANA_IN_KEY_1					0x3C
#define SI1145_REG_ANA_IN_KEY_2					0x3D
#define SI1145_REG_ANA_IN_KEY_3					0x3E

/******************************************/
/******** Accessible Parameter RAM ********/
/******************************************/
#define SI1145_PRAM_I2C_ADDR					0x00

#define SI1145_PRAM_CHLIST						0x01
#define SI1145_PRAM_CHLIST_EN_UV				0x80
#define SI1145_PRAM_CHLIST_EN_AUX				0x40
#define SI1145_PRAM_CHLIST_EN_ALS_IR			0x20
#define SI1145_PRAM_CHLIST_EN_ALS_VIS			0x10
#define SI1145_PRAM_CHLIST_EN_PS3				0x04
#define SI1145_PRAM_CHLIST_EN_PS2				0x02
#define SI1145_PRAM_CHLIST_EN_PS1				0x01

#define SI1145_PRAM_PSLED12_SELECT				0x02
#define SI1145_PRAM_PSLED12_SELECT_PS2_LED1		0x10
#define SI1145_PRAM_PSLED12_SELECT_PS2_LED2		0x20
#define SI1145_PRAM_PSLED12_SELECT_PS2_LED3		0x40
#define SI1145_PRAM_PSLED12_SELECT_PS1_LED1		0x01
#define SI1145_PRAM_PSLED12_SELECT_PS1_LED2		0x02
#define SI1145_PRAM_PSLED12_SELECT_PS1_LED3		0x04
#define SI1145_PRAM_PSLED3_SELECT				0x03
#define SI1145_PRAM_PSLED3_SELECT_PS3_LED1		0x01
#define SI1145_PRAM_PSLED3_SELECT_PS3_LED2		0x02
#define SI1145_PRAM_PSLED3_SELECT_PS3_LED3		0x04

#define SI1145_PRAM_PS_ENCODING					0x05
#define SI1145_PRAM_PS_ENCODING_PS1_ALIGN		0x10
#define SI1145_PRAM_PS_ENCODING_PS2_ALIGN		0x20
#define SI1145_PRAM_PS_ENCODING_PS3_ALIGN		0x40

#define SI1145_PRAM_ALS_ENCODING				0x06
#define SI1145_PRAM_ALS_ENCODING_ALS_VIS_ALIGN	0x10
#define SI1145_PRAM_ALS_ENCODING_ALS_IR_ALIGN	0x20

#define SI1145_PRAM_PS1_ADCMUX					0x07
#define SI1145_PRAM_PS2_ADCMUX					0x08
#define SI1145_PRAM_PS3_ADCMUX					0x09

#define SI1145_PRAM_PS_ADC_COUNTER				0x0A
#define SI1145_PRAM_PS_ADC_GAIN					0x0B
#define SI1145_PRAM_PS_ADC_MISC					0x0C
#define SI1145_PRAM_PS_ADC_MISC_PS_RANGE		0x20
#define SI1145_PRAM_PS_ADC_MISC_PS_ADC_MODE		0x40

#define SI1145_PRAM_ALS_IR_ADCMUX				0x0E
#define SI1145_PRAM_AUX_ADCMUX					0x0F
#define SI1145_PRAM_ALS_VIS_ADC_COUNTER			0x10
#define SI1145_PRAM_ALS_VIS_ADC_GAIN			0x11
#define SI1145_PRAM_ALS_VIS_ADC_MISC			0x12
#define SI1145_PRAM_ALS_VIS_ADC_MISC_VIS_RANGE	0x20

#define SI1145_PRAM_LED_REC						0x1C
#define SI1145_PRAM_ALS_IR_ADC_COUNTER			0x1D
#define SI1145_PRAM_ALS_IR_ADC_GAIN				0x1E
#define SI1145_PRAM_ALS_IR_ADC_MISC				0x1F
#define SI1145_PRAM_ALS_IR_ADC_MISC_IR_RANGE	0x20
