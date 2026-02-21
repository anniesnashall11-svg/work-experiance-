//C++
//
const int led1 = 12; //First LED
const int led2 = 11; //Second LED
void setup() {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);// put your setup code here, to run once:
}
void loop() {
  //LED1 ON, LED2 OFF
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(1000);  // 1 second

  //LED1 OFF, LED2 ON
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000);  // 1 second

}
