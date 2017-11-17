#include "coeur.c"
#include "coeur.h"

int pinled[10] = {6,4,3,2,5,7,8,11,10,9}; // Ordre des LEDS pour le mode 1 et le mode chenille 
int pinled3[3] = {6,2,8}; // ordre des leds pour le mode 3
int pinled2[5] = {6,3,5,8,10}; // Ordre des LEDS pour le mode 2 
int mode = 1 ; // variable qui à la fonction de choisir de mode 
 int i = 0; // variable pour boucle

 boolean etatbouton ; 
void setup() { 
 for(i = 0; i < 10 ; i++)
 {
  pinMode(pinled[i],OUTPUT); // initialisation des pins 
  digitalWrite(pinled[i],LOW); // on s'assure que les leds sont éteintes 
 }
  pinMode(12,INPUT_PULLUP);
  i = 0;
}
 
void loop()
{ 


switch(mode)
  {
   case 1:
  mode1(pinled);
  break;

  case 2:
   mode2(pinled2);
    break;

  case 3:
  // mode 3.
  mode3(pinled3);

    break;

    case 4: 
    // mode chenille
  modechenille(pinled);

    break;

    case 5:

     // mode 4
     
   mode4(pinled);
   break;

   default:
   mode1(pinled);
   break;

     
  }
  
}



/*


// mode choixled

 int etat bouton 

    
     
     case 1:  // mode 1 : allume toute les leds 
      
     if(p == 1)  
   { for(i = 0; i < 10; i++)
    { 
      digitalWrite(pinled[i],HIGH);
    }
      delay(250);
    for(i = 0; i < 10; i++)
    {
      digitalWrite(pinled[i],LOW);
    }
    p = 0;
   } 
  
     break;

    case 2: // mode 2 : allume 1/2 des leds
  if(p == 1)
   {   
    for(i = 0; i < 5 ; i++)
    {
      digitalWrite(pinled2[i],HIGH); 
      
    } 
    delay(250);
    
    for(i = 0; i < 5 ; i++)
    {
      digitalWrite(pinled2[i],LOW);
    }
    p = 0;
   }
    break;

    case 3: // mode 3 : allume 1/3 des leds 
   if(p == 1)  
   {
    for(i = 0; i < 3 ; i++)
    {
      digitalWrite(pinled3[i],HIGH); 
    }
    delay(250);
    
    for(i = 0; i < 3 ; i++)
    {  
      digitalWrite(pinled3[i],LOW);
    }
    p = 0;
   }
   
    break;

    case 4: // mode chenille : les leds s'allument et s'éteignent à la chaine 
  if(p == 1)
   {   
    for(i = 0; i < 10 ; i++)
    {
       
      digitalWrite(pinled[i],HIGH);   // on allume la led suivante 
      delay(200);
    }


    for(i = 10; i > 10 ; i--)
    {
      digitalWrite(pinled[i],LOW); // on s'assure que toutes les leds soient éteintes 
      delay(200);
    } 
    p = 0;  
   } 
    break;
}

// mode led unique

    delay(200);
    digitalWrite(pinled[i],HIGH);
    delay(200);
    digitalWrite(pinled[i],LOW);
    
    boolean etat bouton = digitalRead(12);

    if(etatbuton == 1)
    {
      i = i +1;
    }
*/




