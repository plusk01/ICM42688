/*
This file contains a useful c translation of the datasheet register map
*/

#ifndef _ICM_42688_REGISTERS_H_
#define _ICM_42688_REGISTERS_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

  typedef enum
  {
    // Generalized
    REG_BANK_SEL = 0x76,


    // User Bank 0
    UB0_REG_DEVICE_CONFIG = 0x11,
    // break
    UB0_REG_DRIVE_CONFIG = 0x13,
    UB0_REG_INT_CONFIG,
    // break
    UB0_REG_FIFO_CONFIG = 0x16,
    // break
    UB0_REG_TEMP_DATA1 = 0x1D,
    UB0_REG_TEMP_DATA0,
    UB0_REG_ACCEL_DATA_X1,
    UB0_REG_ACCEL_DATA_X0,
    UB0_REG_ACCEL_DATA_Y1,
    UB0_REG_ACCEL_DATA_Y0,
    UB0_REG_ACCEL_DATA_Z1,
    UB0_REG_ACCEL_DATA_Z0,
    UB0_REG_GYRO_DATA_X1,
    UB0_REG_GYRO_DATA_X0,
    UB0_REG_GYRO_DATA_Y1,
    UB0_REG_GYRO_DATA_Y0,
    UB0_REG_GYRO_DATA_Z1,
    UB0_REG_GYRO_DATA_Z0,
    UB0_REG_TMST_FSYNCH,
    UB0_REG_TMST_FSYNCL,
    UB0_REG_INT_STATUS,
    UB0_REG_FIFO_COUNTH,
    UB0_REG_FIFO_COUNTL,
    UB0_REG_FIFO_DATA,
    UB0_REG_APEX_DATA0,
    UB0_REG_APEX_DATA1,
    UB0_REG_APEX_DATA2,
    UB0_REG_APEX_DATA3,
    UB0_REG_APEX_DATA4,
    UB0_REG_APEX_DATA5,
    UB0_REG_INT_STATUS2,
    UB0_REG_INT_STATUS3,
    // break
    UB0_REG_SIGNAL_PATH_RESET = 0x4B,
    UB0_REG_INTF_CONFIG0,
    UB0_REG_INTF_CONFIG1,
    UB0_REG_PWR_MGMT0,
    UB0_REG_GYRO_CONFIG0,
    UB0_REG_ACCEL_CONFIG0,
    UB0_REG_GYRO_CONFIG1,
    UB0_REG_GYRO_ACCEL_CONFIG0,
    UB0_REG_ACCEFL_CONFIG1,
    UB0_REG_TMST_CONFIG,
    // break
    UB0_REG_APEX_CONFIG0 = 0x56,
    UB0_REG_SMD_CONFIG,
    // break
    UB0_REG_FIFO_CONFIG1 = 0x5F,
    UB0_REG_FIFO_CONFIG2,
    UB0_REG_FIFO_CONFIG3,
    UB0_REG_FSYNC_CONFIG,
    UB0_REG_INT_CONFIG0,
    UB0_REG_INT_CONFIG1,
    UB0_REG_INT_SOURCE0,
    UB0_REG_INT_SOURCE1,
    // break
    UB0_REG_INT_SOURCE3 = 0x68,
    UB0_REG_INT_SOURCE4,
    // break
    UB0_REG_FIFO_LOST_PKT0 = 0x6C,
    UB0_REG_FIFO_LOST_PKT1,
    // break
    UB0_REG_SELF_TEST_CONFIG = 0x70,
    // break
    UB0_REG_WHO_AM_I = 0x75,


    // User Bank 1
    UB1_REG_SENSOR_CONFIG0 = 0x03,
    // break
    UB1_REG_GYRO_CONFIG_STATIC2 = 0x0B,
    UB1_REG_GYRO_CONFIG_STATIC3,
    UB1_REG_GYRO_CONFIG_STATIC4,
    UB1_REG_GYRO_CONFIG_STATIC5,
    UB1_REG_GYRO_CONFIG_STATIC6,
    UB1_REG_GYRO_CONFIG_STATIC7,
    UB1_REG_GYRO_CONFIG_STATIC8,
    UB1_REG_GYRO_CONFIG_STATIC9,
    UB1_REG_GYRO_CONFIG_STATIC10,
    // break
    UB1_REG_XG_ST_DATA = 0x5F,
    UB1_REG_YG_ST_DATA,
    UB1_REG_ZG_ST_DATA,
    UB1_REG_TMSTVAL0,
    UB1_REG_TMSTVAL1,
    UB1_REG_TMSTVAL2,
    // break
    UB1_REG_INTF_CONFIG4 = 0x7A,
    UB1_REG_INTF_CONFIG5,
    UB1_REG_INTF_CONFIG6,


    // User Bank 2
    UB2_REG_ACCEL_CONFIG_STATIC2 = 0x03,
    UB2_REG_ACCEL_CONFIG_STATIC3,
    UB2_REG_ACCEL_CONFIG_STATIC4,
    // break
    UB2_REG_XA_ST_DATA = 0x3B,
    UB2_REG_YA_ST_DATA,
    UB2_REG_ZA_ST_DATA,


    // User Bank 4
    UB4_REG_APEX_CONFIG1 = 0x40,
    UB4_REG_APEX_CONFIG2,
    UB4_REG_APEX_CONFIG3,
    UB4_REG_APEX_CONFIG4,
    UB4_REG_APEX_CONFIG5,
    UB4_REG_APEX_CONFIG6,
    UB4_REG_APEX_CONFIG7,
    UB4_REG_APEX_CONFIG8,
    UB4_REG_APEX_CONFIG9,
    // break
    UB4_REG_ACCEL_WOM_X_THR = 0x4A,
    UB4_REG_ACCEL_WOM_Y_THR,
    UB4_REG_ACCEL_WOM_Z_THR,
    UB4_REG_INT_SOURCE6,
    UB4_REG_INT_SOURCE7,
    UB4_REG_INT_SOURCE8,
    UB4_REG_INT_SOURCE9,
    UB4_REG_INT_SOURCE10,
    // break
    UB4_REG_OFFSET_USER0 = 0x77,
    UB4_REG_OFFSET_USER1,
    UB4_REG_OFFSET_USER2,
    UB4_REG_OFFSET_USER3,
    UB4_REG_OFFSET_USER4,
    UB4_REG_OFFSET_USER5,
    UB4_REG_OFFSET_USER6,
    UB4_REG_OFFSET_USER7,
    UB4_REG_OFFSET_USER8
  } ICM_42688_Reg_Addr_e; // These enums are not needed for the user, so they stay in this scope (simplifies naming among other things)

  // Type definitions for the registers
  typedef struct
  {
    uint8_t reserved_0 : 3;
    uint8_t SPI_MODE : 1;
    uint8_t reserved_1 : 3;
    uint8_t SOFT_RESET_CONFIG : 1;  
  } ICM_42688_DEVICE_CONFIG_t;

  typedef struct
  {
    uint8_t reserved_0 : 2;
    uint8_t INT2_MODE : 1;
    uint8_t INT2_DRIVE_CIRCUIT : 1;
    uint8_t INT2_POLARITY : 1;
    uint8_t INT1_MODE : 1;
    uint8_t INT1_DRIVE_CIRCUIT : 1;
    uint8_t INT1_POLARITY : 1;
  } ICM_42688_INT_CONFIG_t;

  typedef struct
  {
    uint8_t TEMP_DATA_H;
  } ICM_42688_TEMP_DATA1_t;

  typedef struct
  {
    uint8_t TEMP_DATA_L;
  } ICM_42688_TEMP_DATA0_t;

  typedef struct
  {
    uint8_t ACCEL_DATA_X_H;
  } ICM_42688_ACCEL_DATA_X1_t;

  typedef struct
  {
    uint8_t ACCEL_DATA_X_L;
  } ICM_42688_ACCEL_DATA_X0_t;

  typedef struct
  {
    uint8_t ACCEL_DATA_Y_H;
  } ICM_42688_ACCEL_DATA_Y1_t;

  typedef struct
  {
    uint8_t ACCEL_DATA_Y_L;
  } ICM_42688_ACCEL_DATA_Y0_t;

  typedef struct
  {
    uint8_t ACCEL_DATA_Z_H;
  } ICM_42688_ACCEL_DATA_Z1_t;

  typedef struct
  {
    uint8_t ACCEL_DATA_Z_L;
  } ICM_42688_ACCEL_DATA_Z0_t;

  typedef struct
  {
    uint8_t GYRO_DATA_X_H;
  } ICM_42688_GYRO_DATA_X1_t;

  typedef struct
  {
    uint8_t GYRO_DATA_X_L;
  } ICM_42688_GYRO_DATA_X0_t;

  typedef struct
  {
    uint8_t GYRO_DATA_Y_H;
  } ICM_42688_GYRO_DATA_Y1_t;

  typedef struct
  {
    uint8_t GYRO_DATA_Y_L;
  } ICM_42688_GYRO_DATA_Y0_t;

  typedef struct
  {
    uint8_t GYRO_DATA_Z_H;
  } ICM_42688_GYRO_DATA_Z1_t;

  typedef struct
  {
    uint8_t GYRO_DATA_Z_L;
  } ICM_42688_GYRO_DATA_Z0_t;

  typedef struct
  {
    uint8_t reserved_0 : 1;
    uint8_t UI_FSYNC_INT : 1;
    uint8_t PLL_RDY_INT : 1;
    uint8_t RESET_DONE_INT : 1;
    uint8_t DATA_RDY_INT : 1;
    uint8_t FIFO_THS_INT : 1;
    uint8_t FIFO_FULL_INT : 1;
    uint8_t AGC_RDY_INT : 1;
  } ICM_42688_INT_STATUS_t;

  typedef struct
  {
    uint8_t FIFO_COUNT_H;
  } ICM_42688_FIFO_COUNTH_t;

  typedef struct
  {
    uint8_t FIFO_COUNT_L;
  } ICM_42688_FIFO_COUNTL_t;

  typedef struct
  {
    uint8_t FIFO_DATA;
  } ICM_42688_FIFO_DATA_t;

  typedef struct
  {
    uint8_t reserved_0 : 4;
    uint8_t SMD_INT : 1;
    uint8_t WOM_Z_INT : 1;
    uint8_t WOM_Y_INT : 1;
    uint8_t WOM_X_INT : 1;
  } ICM_42688_INT_STATUS2_t;

  typedef struct
  {
    uint8_t reserved_0 : 2;
    uint8_t STEP_DET_INT : 1;
    uint8_t STEP_CNT_OVF_INT : 1;
    uint8_t TILT_DET_INT : 1;
    uint8_t WAKE_INT : 1;
    uint8_t SLEEP_INT : 1;
    uint8_t TAP_DET_INT : 1;
  } ICM_42688_INT_STATUS3_t;

  typedef struct
  {
    uint8_t reserved_0 : 2;
    uint8_t TEMP_DIS : 1;
    uint8_t IDLE : 1;
    uint8_t GYRO_MODE : 2;
    uint8_t ACCEL_MODE : 2;
  } ICM_42688_PWR_MGMT0_t;

  typedef struct
  {
    uint8_t GYRO_FS_SEL : 3;
    uint8_t reserved_0 : 1;
    uint8_t GYRO_ODR : 4;
  } ICM_42688_GYRO_CONFIG0_t;

  typedef struct
  {
    uint8_t ACCEL_FS_SEL : 3;
    uint8_t reserved_0 : 1;
    uint8_t ACCEL_ODR : 4;
  } ICM_42688_ACCEL_CONFIG0_t;

  typedef struct
  {
    uint8_t TEMP_FILT_BW : 3;
    uint8_t reserved_0 : 1;
    uint8_t GYRO_UI_FILT_ORD : 2;
    uint8_t GYRO_DEC2_M2_ORD : 2;
  } ICM_42688_GYRO_CONFIG1_t;

  typedef struct
  {
    uint8_t ACCEL_UI_FILT_BW : 4;
    uint8_t GYRO_UI_FILT_BW : 4;
  } ICM_42688_GYRO_ACCEL_CONFIG0_t;

  typedef struct
  {
    uint8_t reserved_0 : 3;
    uint8_t ACCEL_UI_FILT_ORD : 2;
    uint8_t ACCEL_DEC2_M2_ORD : 2;
    uint8_t reserved_1 : 1;
  } ICM_42688_ACCEL_CONFIG1_t;

  typedef struct
  {
    uint8_t reserved_0 : 1;
    uint8_t ACCEL_ST_POWER : 1;
    uint8_t EN_AZ_ST : 1;
    uint8_t EN_AY_ST : 1;
    uint8_t EN_AX_ST : 1;
    uint8_t EN_GZ_ST : 1;
    uint8_t EN_GY_ST : 1;
    uint8_t EN_GX_ST : 1;
  } ICM_42688_SELF_TEST_CONFIG_t;

  typedef struct
  {
    uint8_t WHO_AM_I;
  } ICM_42688_WHO_AM_I_t;


  // Bank select register!
  typedef struct
  {
    uint8_t reserved_0 : 5;
    uint8_t BANK_SEL : 3;
  } ICM_42688_REG_BANK_SEL_t;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _ICM_42688_REGISTERS_H_ */