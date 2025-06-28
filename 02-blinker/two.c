#include <mega16.h>
#include <delay.h>
#define xtal 4000000  /*ferekans kari avr*/
 int i;
 void main(void)
 {
 DDRD= 0XFF;
    while( 1 ){
    for(i=1 ; i<=128; i=i*2) {
      PORTD = i;
      delay_ms(50);
                }
                   for(i=64 ; i > 1; i=i/2) {
      PORTD = i;
      delay_ms(50);
                }
        }
        }