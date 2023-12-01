void openEE(int angle = 70){
  servoEE.rotateTo(angle);
}

void closeEE(int angle = 0){
  servoEE.rotateTo(angle);
}

void moveArmTo( double JointAngleMatrix[NUM_JOINTS]) {
  int angle1 = int(JointAngleMatrix[0]);
  int angle2 = int(JointAngleMatrix[1]);
  int angle3 = int(JointAngleMatrix[2]);

  servo1.rotateTo(angle1);
  servo2.rotateTo(angle2);
  servo3.rotateTo(angle3);
}

void moveWithIK(double EEpose[3]){
  double JointAngleMatrix[NUM_JOINTS];
  double L0 = 5.0; //cm  
  double L1 = 12.0; // cm
  double L2 = 13.0; //cm


  inverseKinematics(EEpose,JointAngleMatrix, L0, L1, L2);
  moveArmTo( JointAngleMatrix); 

}