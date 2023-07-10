#ifndef USE_I2C
#define USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)
#endif

  #define USE_PCF8574                            // [I2cDriver2] Enable PCF8574 I/O Expander (I2C addresses 0x20 - 0x26 and 0x39 - 0x3F) (+1k9 code)
    #define USE_PCF8574_SENSOR                   // enable PCF8574 inputs and outputs in SENSOR message
    #define USE_PCF8574_DISPLAYINPUT             // enable PCF8574 inputs display in Web page
    #define USE_PCF8574_MQTTINPUT                // enable MQTT message & rule process on input change detection : stat/%topic%/PCF8574_INP = {""Time"":""2021-03-07T16:19:23+01:00"",""PCF8574-1_INP"":{""D1"":1}}

#define USE_ETHERNET                             // Add support for ethernet (Currently fixed for Olimex ESP32-PoE)
  #define ETH_TYPE          0                    // [EthType] 0 = ETH_PHY_LAN8720, 1 = ETH_PHY_TLK110, 2 = ETH_PHY_IP101
  #define ETH_ADDR          0                    // [EthAddress] 0 = PHY0 .. 31 = PHY31
  #define ETH_CLKMODE       3                    // [EthClockMode] 0 = ETH_CLOCK_GPIO0_IN, 1 = ETH_CLOCK_GPIO0_OUT, 2 = ETH_CLOCK_GPIO16_OUT, 3 = ETH_CLOCK_GPIO17_OUT
