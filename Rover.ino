const int irLeft = D4;
const int irRight = D5;

const int leftMotor1 = D0;
const int leftMotor2 = D1;
const int rightMotor1 = D2;
const int rightMotor2 = D3;
int leftState,rightState;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(irLeft, INPUT);
pinMode(irRight, INPUT);

pinMode(leftMotor1, OUTPUT);
pinMode(leftMotor2, OUTPUT);
pinMode(rightMotor1, OUTPUT);
pinMode(rightMotor2, OUTPUT);

leftState = digitalRead(irLeft);
rightState = digitalRead(irRight);

}

void moveForward() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void turnLeft() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, HIGH);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void turnRight() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, HIGH);
}

void stopMotors() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Left: ");
  Serial.print(leftState);
  Serial.println(" | Right: ");
  Serial.print(rightState);

  if (leftState == HIGH && rightState== HIGH) {
    moveForward();
  }
  else if (leftState == LOW && rightState == HIGH) {
    turnLeft();
  }
  else if (leftState == HIGH && rightState == LOW) {
    turnRight();
  }
  else {
    stopMotors();
  }
  delay(50);
}
