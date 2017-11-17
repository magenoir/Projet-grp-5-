#include "coeur.h"
void mode1(int *pinled)
{
  int i;
   delay(250);
    for(i = 0; i < 10; i++)
    { 
      digitalWrite(pinled[i],1);
    }
      delay(250);
    for(i = 0; i < 10; i++)
    {
      digitalWrite(pinled[i],0);
    }

}

void mode2(int *pinled2)
{
  int i;
    delay(250);
   for(i = 0; i < 5 ; i++)
    {
      digitalWrite(pinled2[i],1); 
      
    } 
    delay(250);
    
    for(i = 0; i < 5 ; i++)
    {
      digitalWrite(pinled2[i],0);
    }
}

void mode3(int *pinled3)
{
  int i;
  delay(250);
  for(i = 0; i < 3 ; i++)
    {
      digitalWrite(pinled3[i],1); 
    }
    delay(250);
    
    for(i = 0; i < 3 ; i++)
    {  
      digitalWrite(pinled3[i],0);
    }
}
void modechenille(int *pinled)
{
  int i;
   for(i = 0; i < 10 ; i++)
    {
       
      digitalWrite(pinled[i],1);   // on allume la led suivante 
      delay(200);
    }


    for(i = 0; i < 10 ; i++)
    {
      digitalWrite(pinled[i],0); // on s'assure que toutes les leds soient éteintes 
      delay(200);
    } 
}
void mode4(int *pinled)
{
  int i;
  int etatbouton;
    delay(200);
    digitalWrite(pinled[i],1);
    delay(200);
    digitalWrite(pinled[i],0);
      
     etatbouton = digitalRead(12);

    if(etatbouton == 0)
    {
      i = i +1;
      if(i > 10)
      {
        i = 0;
      }
    }
}

