#ifndef BMP180_THERM_REG_H
#define BMP180_THERM_REG_H

#include <cstdint>

/*-----------------------------------------------------------------------
ADDRESSES
-----------------------------------------------------------------------*/
enum class I2C_Address: uint8_t
{
    THERM           = 0x77
};

/*-----------------------------------------------------------------------
CONST VALUES
-----------------------------------------------------------------------*/
enum class I2C_Value: uint8_t
{
    READTEMP        = 0x2E  //TEMPDATA
};

/*-----------------------------------------------------------------------
REGISTERS
-----------------------------------------------------------------------*/
enum class I2C_Register: uint8_t
{
    CONTROL         = 0xF4,
    TEMPDATA        = 0xF6
};

#endif // BMP180_THERM_REG_H
