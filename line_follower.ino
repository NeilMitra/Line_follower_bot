
int motor_r2 = 9;
int motor_r1 = 10;

int motor_l2 = 5;
int motor_l1 = 6;

int speed = 80;

int L_S = A0; //sincer L
int R_S = A1; //sincer R


void setup(){
 pinMode(motor_l1, OUTPUT);
 pinMode(motor_l2, OUTPUT);
 
 pinMode(motor_r1, OUTPUT);
 pinMode(motor_r2, OUTPUT);
 
 pinMode(L_S, INPUT);
 pinMode(R_S, INPUT);
 
 delay(1000);
}


void loop() {
  if ((digitalRead(L_S) == 0)&&(digitalRead(R_S) == 0)){ //move forward
    analogWrite(motor_l1, speed);
    analogWrite(motor_l2, 0);
    analogWrite(motor_r2, speed);
    analogWrite(motor_r1, 0);  
  }

  if ((digitalRead(L_S) == 1)&&(digitalRead(R_S) == 0)){ //turn right
    analogWrite(motor_l1, 0);
    analogWrite(motor_l2, 0);
    analogWrite(motor_r2, speed);
    analogWrite(motor_r1, 0);  
  }

  if ((digitalRead(L_S) == 0)&&(digitalRead(R_S) == 1)){//turn left
    analogWrite(motor_l1, speed);
    analogWrite(motor_l2, 0);
    analogWrite(motor_r2, 0); 
    analogWrite(motor_r1, 0);   
  }
  if ((digitalRead(L_S) == 1)&&(digitalRead(R_S) == 1)){//stop
    analogWrite(motor_l1, 0);
    analogWrite(motor_l2, 0);
    analogWrite(motor_r2, 0);
    analogWrite(motor_r1, 0);
  }
}
