int rel1 = 3;   // relay 1
int rel2 = 4;   // relay 2
int rel3 = 5;   // relay 3
int wire = 7;  // input wire
int buzzer = 10; // buzzer
int led1 = 11;  // Red led
int led2 = 12;  // Green led

void setup()
{
 pinMode(wire, INPUT);
 pinMode(rel1, OUTPUT);
 pinMode(rel2, OUTPUT);
 pinMode(rel3, OUTPUT);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(buzzer, OUTPUT);
 
}

void loop()
{

  int masure = digitalRead(wire);
    if (masure == 1)
  {
    digitalWrite(rel1, HIGH);
    digitalWrite(rel2, HIGH);
    digitalWrite(rel3, HIGH);
    digitalWrite(led2, HIGH);
    
    
  }
  
  else
  delay(50);
  {
    digitalWrite(rel1, LOW);
    digitalWrite(rel2, LOW);
    digitalWrite(rel3, LOW);
    digitalWrite(led2, LOW);
    
    if (masure == 0)
      {
        digitalWrite(led1, HIGH);
        tone(buzzer, 2000); // Send 1KHz sound signal...
        delay(250);  
        digitalWrite(led1, LOW);
        noTone(buzzer);     // Stop sound...
        delay(250);  
      }
    else
      {
        noTone(buzzer);
      }
  }
}
