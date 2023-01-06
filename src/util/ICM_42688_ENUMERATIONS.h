/*
This file contains a useful c translation of the datasheet register map values
*/

#ifndef _ICM_42688_ENUMERATIONS_H_
#define _ICM_42688_ENUMERATIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

  typedef enum
  {
    off = 0x00,
    standby = 0x01,
    low_poser_mode = 0x02,
    low_noise_mode = 0x03
  } ICM_42688_PWR_MGMT0_MODE_e;

  typedef enum
  { // Full scale range options in degrees per second
    dps2000 = 0x00,
    dps1000,
    dps500,
    dps250,
    dps125,
    dps62_5,
    dps31_25,
    dps15_625,
  } ICM_42688_GYRO_CONFIG0_FS_SEL_e;

  typedef enum
  { // Full scale range options in gs (plus/minus)
    gpm16 = 0x00,
    gpm8,
    gpm4,
    gpm2,
  } ICM_42688_ACCEL_CONFIG0_FS_SEL_e;

  typedef enum
  {
    odr32k = 0x01, // LN mode only
    odr16k, // LN mode only
    odr8k, // LN mode only
    odr4k, // LN mode only
    odr2k, // LN mode only
    odr1k, // LN mode only
    odr200,
    odr100,
    odr50,
    odr25,
    odr12_5,
    odr6_25, // LP mode only (accel only)
    odr3_125, // LP mode only (accel only)
    odr1_5625, // LP mode only (accel only)
    odr500,
  } ICM_42688_ODR_e; // in ACCEL_CONFIG0 and GYRO_CONFIG0


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _ICM_42688_ENUMERATIONS_H_ */