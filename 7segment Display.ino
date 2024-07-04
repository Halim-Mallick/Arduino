//7 Segment Led Code

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {

//for 0:
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(200); 

//for 1:
  digitalWrite(13, LOW); 
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  digitalWrite(10, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(200); 

//for 2:
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(200); 

//for 3:
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(200); 

//for 4:
  digitalWrite(13, LOW); 
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  digitalWrite(10, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(200);

//for 5:
  digitalWrite(13, HIGH); 
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(200);

//for 6:
  digitalWrite(13, HIGH); 
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(200);

//for 7:
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  digitalWrite(10, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  delay(200);

//for 8:
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(200);
  
//for 9:
  digitalWrite(13, HIGH); 
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(200);

}
