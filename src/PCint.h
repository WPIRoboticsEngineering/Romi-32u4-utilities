#include <Arduino.h>

/** \brief Attaches a function to a pin change interrupt.
 *
 * \param pcInt The specific pin change interrupt, e.g., "PCINT3"
 * \param pcisr A pointer to the ISR function, of type void fxn(void).
 * 
 *  */
void attachPCInt(uint8_t pcInt, void (*pcisr)(void));

/** \brief Translates Arduino pin number to a PCINT.
 * 
 * Currently only for ATmega32U4.
 * 
 * */
uint8_t digitalPinToPCInterrupt(uint8_t pin);