#INCLUDE<16f887.h>
#USE DELAY(CLOCK=4000000)
#FUSES XT,PROTECT,NOWDT,NOBROWNOUT,PUT,NOLVP
#DEFINE LED PORTB,0
#DEFINE act1 PORTC,0
#DEFINE act2 PORTC,1
#DEFINE act3 PORTC,2
#DEFINE act4 PORTC,3
#BYTE PORTB= 6
#BYTE PORTC=7
Byte CONST display[10]= {0b1000000,0b1111001,0b0100100
,0b0110000,0b0011001,0b0010010
,0b0000010,0b1111000,0b0000000,0b0010000};

VOID MAIN()
{
   
   SET_TRIS_B(0B000000);    //Configura el puerto B
   PORTB=0;
   SET_TRIS_C(0B0000000);
   int uni=0;
   int dec=0;
   int cent=0;
   int mil=0;
   while(TRUE){
   
       
     
      PORTB=display[uni];
      BIT_SET(act1);
      delay_ms(4);
      BIT_CLEAR(act1);
      PORTB=display[dec];
      BIT_SET(act2);
      delay_ms(4);
      BIT_CLEAR(act2);
      PORTB=display[cent];
      BIT_SET(act3);
      delay_ms(4);
      BIT_CLEAR(act3);
      PORTB=display[mil];
      BIT_SET(act4);
      delay_ms(4);
      BIT_CLEAR(act4);
      
      uni++;
      
      if(uni>9){
         uni=0;
         }
      if(uni==9){
         dec++;
      }
      if(dec>9){
         dec=0;
      }
      if(dec==9){
         cent++;
      }
      if(dec>9){
         cent==0;
      }
      
      
    
    
     }
     
     
   
    
}

