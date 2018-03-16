int led1 = D0;
int led2 = D7;



void setup() {
// We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {

  // My Last name is: COLLINS
  // In Morse: C: -.-.   O: ---  L: .-..  L: .-..  I: .. N: -. S: ...
  
  // C
  longblink(); shortblink(); longblink(); shortblink();
  
  // O
  
  longblink(); longblink(); longblink();
  
  // L
  
  shortblink(); longblink(); shortblink(); shortblink();
  
  // L
  
  shortblink(); longblink(); shortblink(); shortblink();
  
  // I
  
  shortblink(); shortblink();
  
  // N
  
  longblink(); shortblink();
  
  // S
  
  shortblink(); shortblink(); shortblink();
  
  

}

void longblink()
{  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  // We'll leave it on for 1 second...
  delay(1000); 
  
   
  // Then we'll turn it off...
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  
  delay(1000);
}


void shortblink()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  // We'll leave it on for 0.5 second...
  delay(500); 
  
   
  // Then we'll turn it off...
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  
  delay(500);
}    
