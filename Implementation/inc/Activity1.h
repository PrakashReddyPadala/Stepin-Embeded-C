#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Port Number */
#define LED_PIN  (PORTD0)   /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD2)   /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for Temperature Sensor   */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 *
 */
void peripheral_init(void);

/**
 * @brief Function to turn LED on
 *
 */
void TurnLED_ON();

/**
 * @brief Function to turn LED off
 *
 */
void TurnLED_OFF();

/**
 * @brief Activity 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed
 *
 */
int activity1_LED(void);

//#endif /* __ACTIVITY_1_H__ */


#endif // ACTIVITY1_H_INCLUDED
