7/*

*/
int y;
int mainGreen=6;


void setup() {
  
   Serial.begin(9600);
   pinMode(mainGreen, OUTPUT);
 
   for(y=0; y<250; y=y+1){
   analogWrite(mainGreen, y);
   delay(4);
}

   for(y=255; y>=0; y=y-1){
   analogWrite(mainGreen, y;
   delay(4);

  }
}

void loop() {
  
  

} 
