#include <mega16.h>
#include <delay.h>

char digits[16] = {0x3F , 0x06 , 0x5B , 0x4F , 0x66 , 0x6D, 0x7D, 0x07 ,
                            0x7F, 0x6F, 0x77 , 0x7C , 0x39 , 0x5E , 0x79, 0x71};         // 7-seg az bala rast shoro be charkesh mikonad. yani az gosheh rast shoro be charekhsh karde (abcdef) va h ham noqte payeene payeen samt chap
unsigned char;
unsigned char p_state;
unsigned char key;
unsigned char i;
void main(void){
DDRD= 0xFF;
PORTD = digits[0];
     DDRC =  0x00;
     PORTC=0xFF;
     while(1)
     {
                       if(PINC.0)
                       {
                          if (key!=p_state)
                          {
                             if(i==15)
                                  {
                                 i=0;
                                  PORTC=digits[0];
                                   }
                               else
                                  i++;
                                  PORTD = digits[i];
                                  p_state=key;
                        }
     }
                        else
                        p_state = 0xFF;
}
}
