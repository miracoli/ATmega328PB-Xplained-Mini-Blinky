# ATmega328PB-Xplained-Mini-Blinky

Simple Blinky to test the toolchain for an ATmega328PB on GNU/Linux.
If the toolchain is setup correctly one can compile and flash with the folowing two commands:
avr-gcc -DF_CPU=16000000 -O2 -mmcu=atmega328pb blinky.c -o blinky
avrdude -C +atmega328pb.conf -c xplainedmini -p m328pb -v -U flash:w:blinky
