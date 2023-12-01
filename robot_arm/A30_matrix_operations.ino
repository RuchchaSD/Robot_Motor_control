// // Function to multiply two 4x4 matrices
// void multiplyMatrices4(float matrixA[M4SIZE][M4SIZE], float matrixB[M4SIZE][M4SIZE], float resultMatrix[M4SIZE][M4SIZE]) {
//   for (int i = 0; i < M4SIZE; i++) {
//     for (int j = 0; j < M4SIZE; j++) {
//       resultMatrix[i][j] = 0; // Initialize the element to 0
//       for (int k = 0; k < M4SIZE; k++) {
//         resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
//       }
//     }
//   }
// }



// // Function to multiply two 3x3 matrices
// void multiplyMatrices3(float matrixA[M3SIZE][M3SIZE], float matrixB[M3SIZE][M3SIZE], float resultMatrix[M3SIZE][M3SIZE]) {
//   for (int i = 0; i < M3SIZE; i++) {
//     for (int j = 0; j < M3SIZE; j++) {
//       resultMatrix[i][j] = 0; // Initialize the element to 0
//       for (int k = 0; k < M3SIZE; k++) {
//         resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
//       }
//     }
//   }
// }