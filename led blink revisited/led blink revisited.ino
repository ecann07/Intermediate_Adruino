       
int x = 0;    
int y = 1;

void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(9, x);
  x = x + y;
  if (x <= 0 || x >= 255) {
    y = -y;
  }

  delay(5);
for (int i = 1; i < x / 10; i++) {
  Serial.print ("-");
}
      
   Serial.println("");
}