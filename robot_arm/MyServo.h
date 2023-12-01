#include <Servo.h>

class MyServo {
  public:
    // Constructor: Initializes the servo on a specific pin with given angles
    MyServo(int pin, int zeroAngle, int minAngle, int maxAngle);

    // Setters and getters for servo parameters
    void setZeroAngle(int zeroAngle);
    void setMaxMinAngles(int max, int min);
    int getZeroAngle();
    int getMaxAngle();
    int getMinAngle();

    // Function to rotate servo to a specific angle
    void rotateTo(int angle);

    // Function to detach servo from its pin
    void detach();

  private:
    Servo servo;                // Servo object
    int servoPin;               // Pin number to which the servo is attached
    int zeroAngleValue;         // Zero angle offset
    int minAngleValue;          // Minimum angle limit
    int maxAngleValue;          // Maximum angle limit
    int curAngle;               // Current angle of the servo
    const int stepSize = 5;     // Step size for rotation movement
};

// Constructor implementation
MyServo::MyServo(int pin, int zeroAngle, int minAngle, int maxAngle)
  : servoPin(pin), zeroAngleValue(zeroAngle), minAngleValue(minAngle), maxAngleValue(maxAngle), curAngle(zeroAngle) {
  servo.attach(pin);  // Attaches the servo on the designated pin
}

// Detach the servo from its pin
void MyServo::detach() {
  servo.detach();
}

// Set a new zero angle
void MyServo::setZeroAngle(int zeroAngle) {
  zeroAngleValue = zeroAngle;
}

// Set new minimum and maximum angles
void MyServo::setMaxMinAngles(int max, int min){
  minAngleValue = min;
  maxAngleValue = max;
}

// Get the current zero angle
int MyServo::getZeroAngle() {
  return zeroAngleValue;
}

// Get the current maximum angle
int MyServo::getMaxAngle(){
  return maxAngleValue;
}

// Get the current minimum angle
int MyServo::getMinAngle(){
  return minAngleValue;
}

// Rotate the servo to a specified angle
void MyServo::rotateTo(int angle) {
  int targetAngle = constrain(angle + zeroAngleValue, minAngleValue, maxAngleValue);  // Ensure angle is within limits

  // Rotate the servo gradually to the target angle
  if (curAngle < targetAngle) {
    for (int a = curAngle; a < targetAngle; a += stepSize) {
      servo.write(a);
      delay(15);
    }
  } else {
    for (int a = curAngle; a > targetAngle; a -= stepSize) {
      servo.write(a);
      delay(15);
    }
  }

  servo.write(targetAngle);  // Make sure servo reaches the target angle
  curAngle = targetAngle;    // Update current angle
}