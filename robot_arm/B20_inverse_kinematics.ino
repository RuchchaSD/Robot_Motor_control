// Function to compute inverse kinematics
void inverseKinematics(double EEpose[3], double JointAngleMatrix[NUM_JOINTS], double L0, double L1, double L2) { // L0 offset from ground, L1 middle link length, L2 second link length
  double x = EEpose[0];
  double y = EEpose[1];
  double z = EEpose[2] - L0; // Adjust z for the height offset

  double r = sqrt(sq(x) + sq(y)); // Horizontal distance from base to end effector
  double s = z; // Vertical distance from base to end effector

  double theta0 = atan2(y, x);

  // Cosine law for angle theta2
  double cosTheta2 = (sq(r) + sq(s) - sq(L1) - sq(L2)) / (2 * L1 * L2);
  cosTheta2 = constrain(cosTheta2, -1, 1); // Ensure the value is within the valid range for acos
  double theta2 = acos(cosTheta2);

  // Law of sines and cosines for angle theta1
  double theta1 = atan2(s, r) - atan2(L2 * sin(theta2), L1 + L2 * cos(theta2));

  // Convert to degrees and store in joint angle matrix
  JointAngleMatrix[0] = degrees(theta0);
  JointAngleMatrix[1] = degrees(theta1);
  JointAngleMatrix[2] = degrees(theta2);
}
