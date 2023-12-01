double EEposition[3];
void loop() {
  // put your main code here, to run repeatedly:
  EEposition = {14.0,16.0,10.0}
  moveWithIK(EEposition);
  EEposition = {-8.0,16.0,10.0}
  delay(10000);
}
