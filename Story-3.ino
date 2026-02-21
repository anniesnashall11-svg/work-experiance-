// C++
//
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 7;
int led6 = 8;

void setup() {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);// put your setup code here, to run once:
  pinMode (led3, OUTPUT);// put your setup code here, to run once:
  pinMode (led4, OUTPUT);// put your setup code here, to run once:
  pinMode (led5, OUTPUT);// put your setup code here, to run once:
  pinMode (led6, OUTPUT);// put your setup code here, to run once:
}

void allOff() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);

  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);

  delay(5000);

  allOff();
  delay(1000);

  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led6, HIGH);

  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);

  delay(2000);
}





