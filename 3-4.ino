int x = 1;
int y;
int mainGreen=6;

void setup()
{
    // Start Serial Moniter and set up pins
    Serial.begin(9600);
    pinMode(8, HIGH);
    pinMode(9, HIGH);
    pinMode(10, HIGH);
    
    while (x<4) {
        Serial.print("Cycle no ");
        Serial.println(x);

        digitalWrite((x + 7), HIGH);
           for(y=0; y<250; y=y+1){
           analogWrite(mainGreen, y);
           delay(4);
           }
           for(y=255; y>=0; y=y-1){
           analogWrite(mainGreen, y);
           delay(4);
           }
           x = x + 1;
  }
}

void loop() {

}
