int prevValue = -1;

void setup() {
     
}

void loop() {
  int x = analogRead(0);
  
  if ( prevValue != x){
    Particle.publish("a0", String(x) );
  }

  prevValue = x;
  
  delay(500);
}
