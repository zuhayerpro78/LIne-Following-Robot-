#include <Arduino.h>
int E_A = 11; 
int IN_1 = 2;
int IN_2 = 3;
int IN_3 = 4;
int IN_4 = 5;
int E_B = 10;       


int L_S = 7;
int C_S = 8;
int R_S = 9;

void setup() {
 pinMode(IN_1,OUTPUT);
 pinMode(IN_2,OUTPUT);
 pinMode(IN_3,OUTPUT);
 pinMode(IN_4,OUTPUT);
 pinMode(E_A,OUTPUT); 
 pinMode(E_B,OUTPUT);

pinMode(L_S,INPUT);
pinMode(C_S,INPUT);
pinMode(R_S,INPUT);

analogWrite(E_A, 160);
analogWrite(E_B, 160);

delay(100);

} 
void loop() {
  // This Loop is so Complex so please TRY TO UNDERSTAND!!!!!!!!!!!
if ((digitalRead (L_S)  == 0)&&(digitalRead (C_S) == 1)&&(digitalRead (R_S)  == 0))//FORWARD
digitalWrite(IN_1, HIGH);
digitalWrite(IN_2, LOW);
digitalWrite(IN_3, HIGH);
digitalWrite(IN_4, LOW);

if ((digitalRead (L_S) == 1)&&(digitalRead (C_S) == 1)&&(digitalRead (R_S) == 0)) //90 DEGREE LEFT TURN
digitalWrite(IN_1, HIGH);
digitalWrite(IN_2, LOW);
digitalWrite(IN_3, LOW);
digitalWrite(IN_4, HIGH);

if ((digitalRead (L_S) == 1)&&(digitalRead (C_S) == 0)&&(digitalRead (R_S) == 0))//LEFT TURN
digitalWrite(IN_1, HIGH);
digitalWrite(IN_2, LOW);
digitalWrite(IN_3, LOW);
digitalWrite(IN_4, LOW);

if ((digitalRead (L_S) == 0)&&(digitalRead (C_S) == 1)&&(digitalRead (R_S) == 1))//90 DEGREE RIGHT TURN
digitalWrite(IN_1, LOW);
digitalWrite(IN_2, HIGH);
digitalWrite(IN_3, HIGH);
digitalWrite(IN_4, LOW);

if ((digitalRead (L_S) == 0)&&(digitalRead (C_S) == 0)&&(digitalRead (R_S) == 1))//RIGHT TURN

digitalWrite(IN_1, LOW);
digitalWrite(IN_2, LOW);
digitalWrite(IN_3, HIGH);
digitalWrite(IN_4, LOW);

if ((digitalRead (L_S) == 1)&&(digitalRead (C_S) == 1)&&(digitalRead (R_S) == 1))//STOP

digitalWrite(IN_1, LOW);
digitalWrite(IN_2, LOW);
digitalWrite(IN_3, LOW);
digitalWrite(IN_4, LOW);
}
