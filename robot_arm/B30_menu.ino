// // void startMenu() {
//   Serial.println("Choose an option:");
//   Serial.println("1. Inverse Kinematics");
//   Serial.println("2. Forward Kinematics");
//   Serial.println("Enter the number of your choice:");
// }

// String readInput(){
//   while(Serial.available() == 0){
//     ;
//   }
//   return Serial.readString();
// }

// void processChoice1(String txt) {
//   char option;
//   if(strlen(txt) > 0){
//     option = 'i';
//   }else {
//     option = txt.charAt(0);
//   }

//   switch (option) {
//     case '1':
//       IKMenu();
//       // Add your code to handle inverse kinematics here
//       break;
//     case '2':
//       Serial.println("You selected Forward Kinematics");
//       // Add your code to handle forward kinematics here
//       break;

//     case '3':
//       Serial.println("You selected Complex Motion");
//       // Add your code to handle forward kinematics here
//       break;
//     default:
//       Serial.println("Invalid selection. Please try again.");
//       printMenu();
//       break;
//   }
// }

// void IKMenu(){
//   Serial.println("You selected Inverse Kinematics");
//   Serial.println("");
// }

// void menu(){
//   String choice;
//   startMenu();
//   choice = readInput();
  


// }