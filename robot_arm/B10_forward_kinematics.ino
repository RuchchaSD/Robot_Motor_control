// // Function to compute forward kinematics
// void forwardKinematics(float jointAngles[NUM_JOINTS], float endEffectorMatrix[M4SIZE][M4SIZE]) {
//   float currentMatrix[M4SIZE][M4SIZE];
//   float tempMatrix[M4SIZE][M4SIZE];

//   // Initialize the end effector matrix as an identity matrix
//   for (int i = 0; i < M4SIZE; i++) {
//     for (int j = 0; j < M4SIZE; j++) {
//       endEffectorMatrix[i][j] = (i == j) ? 1.0 : 0.0;
//     }
//   }

//   // Compute and multiply the matrices for each joint
//   for (int i = 0; i < NUM_JOINTS; i++) {
//     getAmatrix(a[i], alpha[i], d[i], jointAngles[i], currentMatrix);
//     multiplyMatrices4(endEffectorMatrix, currentMatrix, tempMatrix);

//     // Copy the result back to endEffectorMatrix
//     for (int row = 0; row < M4SIZE; row++) {
//       for (int col = 0; col < M4SIZE; col++) {
//         endEffectorMatrix[row][col] = tempMatrix[row][col];
//       }
//     }
//   }
// }
