#ifndef BMP180_BAR_REG_H
#define BMP180_BAR_REG_H

#include <cstdint>

/*-----------------------------------------------------------------------
ADDRESSES
-----------------------------------------------------------------------*/
enum class I2C_Address: uint8_t
{
    BAR             = 0x77
};

/*-----------------------------------------------------------------------
CONST VALUES
-----------------------------------------------------------------------*/
enum class I2C_Value_CONTROL: uint8_t
{
    READPRESSURE    = 0x34
};

/*-----------------------------------------------------------------------
REGISTERS
-----------------------------------------------------------------------*/
enum class I2C_Register: uint8_t
{
    CONTROL         = 0xF4,
    PRESSUREDATA    = 0xF6
};

#endif // BMP180_BAR_REG_H
