#pragma once

#include <freertos/FreeRTOS.h>
#include <driver/i2s.h>

// save to SPIFFS instead of SD Card?
// #define USE_SPIFFS 1

#define VERSION "RC_23_May_22"

#define SAMPLE_RATE 16000   //possible values 8000, 16000, 22000, 32000, ???
#define NUMBER_OF_CHANNELS 1  // 2 for stereo; change to 1 for mono only . must also change CHANNEL_SELECT below
#define CHANNEL_SELECT 4     //0 = stereo; 3=rightonly; 4=leftonly.   must also change NUMBER_OF_CHANNELS above
#define TIMEZONE_OFFSET    7L  //number of hours timezone offset 7= WIB sumatera
#define SECONDS_PER_FILE 14400 //number of seconds to record per wav file.


//#define TOUCHPIN 4
//#define BUZZERPIN 18
//#define ONBOARD_LED  2
#define STATUS_LED  33      //33
#define BATTERY_LED  25     //25
//#define SDCARD_POWER 27
#define GPIO_BUTTON GPIO_NUM_0   //21 per ed email
#define OTHER_GPIO_BUTTON GPIO_NUM_21
#define VOLTAGE_PIN GPIO_NUM_34
 //#define LEDPIN 14

//#define SDMMC_FREQ_DEFAULT 5000




// are you using an I2S microphone - comment this out if you want to use an analog mic and ADC input
#define USE_I2S_MIC_INPUT
// are you using an I2S amplifier - comment this out if you want to use the built in DAC
//#define USE_I2S_SPEAKER_OUTPUT

// I2S Microphone Settings
// Which channel is the I2S microphone on? I2S_CHANNEL_FMT_ONLY_LEFT or I2S_CHANNEL_FMT_ONLY_RIGHT
// Generally they will default to LEFT - but you may need to attach the L/R pin to GND
//#define I2S_MIC_CHANNEL I2S_CHANNEL_FMT_ONLY_LEFT
// #define I2S_MIC_CHANNEL I2S_CHANNEL_FMT_ONLY_RIGHT
//old way
//#define I2S_MIC_SERIAL_CLOCK 14
//#define I2S_MIC_LEFT_RIGHT_CLOCK 15
//#define I2S_MIC_SERIAL_DATA 32
//new

//ESP32 ELOC (TOM) 

#define I2S_MIC_LEFT_RIGHT_CLOCK 12    //to word select. where is channel select? and what does it do?
#define I2S_MIC_SERIAL_DATA 27          // inmp441 has channel select also. 6 pins. 
#define I2S_MIC_SERIAL_CLOCK 14

    //    compare to pdm mic in espressif example
    //    .bck_io_num = I2S_PIN_NO_CHANGE,
    //     .ws_io_num = CONFIG_EXAMPLE_I2S_CLK_GPIO,
    //     .data_out_num = I2S_PIN_NO_CHANGE,
    //     .data_in_num = CONFIG_EXAMPLE_I2S_DATA_GPIO,









#define PIN_NUM_MISO GPIO_NUM_19
#define PIN_NUM_CLK GPIO_NUM_18
#define PIN_NUM_MOSI GPIO_NUM_23
#define PIN_NUM_CS GPIO_NUM_5




// Analog Microphone Settings - ADC1_CHANNEL_7 is GPIO35
#define ADC_MIC_CHANNEL ADC1_CHANNEL_7

// speaker settings
/*#define I2S_SPEAKER_SERIAL_CLOCK GPIO_NUM_19
#define I2S_SPEAKER_LEFT_RIGHT_CLOCK GPIO_NUM_27
#define I2S_SPEAKER_SERIAL_DATA GPIO_NUM_18
*/
// record button
//#define GPIO_BUTTON GPIO_NUM_33


// i2s config for using the internal ADC
extern i2s_config_t i2s_adc_config;
// i2s config for reading from of I2S
extern i2s_config_t i2s_mic_Config;
// i2s microphone pins
extern i2s_pin_config_t i2s_mic_pins;
// i2s speaker pins
//extern i2s_pin_config_t i2s_speaker_pins;
