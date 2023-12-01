#include <Servo.h>
#include <math.h>
#include "MyServo.h" // Include the MyServo class


//All constants are defined here
#define M4SIZE 4
#define M3SIZE 3
#define NUM_JOINTS 3

//All pin assignments are done here
// Link 1
#define SERVO_1_PIN 2
MyServo servo1(9, 90, 0, 180);// Example parameters: pin number 9, zero angle 90 degrees, min angle 0, max angle 180

//Link 2
#define SERVO_2_PIN 3
MyServo servo2(9, 90, 0, 180);// Example parameters: pin number 9, zero angle 90 degrees, min angle 0, max angle 180

//Link 3
#define SERVO_3_PIN 4
MyServo servo3(9, 90, 0, 180);// Example parameters: pin number 9, zero angle 90 degrees, min angle 0, max angle 180

//Link 4
#define EE_PIN 5
MyServo servoEE(9, 0, 0, 180);// Example parameters: pin number 9, zero angle 90 degrees, min angle 0, max angle 180

// Add DH parameters here for each joint
// fill actual values for the symbols
// float a[NUM_JOINTS] = {a1, a2, a3};       // Link lengths
// float alpha[NUM_JOINTS] = {radians(alpha1), radians(alpha2), radians(alpha3)}; // Link twists
// float d[NUM_JOINTS] = {d1, d2, d3};       // Link offsets
// float theta[NUM_JOINTS] = {radians(theta1), radians(theta2), radians(theta3)}; // Link twists

