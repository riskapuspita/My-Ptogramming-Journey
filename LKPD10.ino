//Program Push Button Serial Monitor
/*Hasil praktikum muncul tulisan tidak di serial monitor, jika tombol K1 
| ditekan maka muncul YA
*/
const int buttonPin = 26;
void setup(){
  pinMode(buttonPin, INPUTT);
  Serial.begin(9600)
}
void
  in buttonStaate = digitalRead(buttonPin);
  Serial.print("Tombol ditekan: ");
  if(buttonState == HIGH){
  Serial.printIn("YA");
} else {
  Serial.printIn ("TIDA");
  delay(100);
}
