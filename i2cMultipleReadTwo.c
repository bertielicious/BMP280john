#include "config.h"


#include "i2cSingleReadSequence.h"
uint16_t i2cMultipleReadTwo(uint8_t regAddr)
{
    uint8_t msb, lsb;
    lsb = i2cSingleReadSequence(regAddr);
    __delay_ms(100);
    msb = i2cSingleReadSequence(regAddr + 1);
    __delay_ms(100);
  
   // temp = ((uint16_t)msb << 8) | (uint16_t)lsb;
    return ((uint16_t)msb << 8) | lsb;
}