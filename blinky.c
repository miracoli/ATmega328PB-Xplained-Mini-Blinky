#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main (void) {
  DDRB |= _BV(PB5);
  while(1) {
    PORTB |= _BV(PB5);
    _delay_ms(1000);
    PORTB &= ~_BV(PB5);
    _delay_ms(1000);
  };
}
