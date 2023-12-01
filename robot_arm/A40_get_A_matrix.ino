// void getAmatrix(float a, float alpha, float d, float theta, float matrix[M4SIZE][M4SIZE]) {
//   float radAlpha = radians(alpha);
//   float radTheta = radians(theta);

//   matrix[0][0] = cos(radTheta);
//   matrix[0][1] = -sin(radTheta) * cos(radAlpha);
//   matrix[0][2] = sin(radTheta) * sin(radAlpha);
//   matrix[0][3] = a * cos(radTheta);

//   matrix[1][0] = sin(radTheta);
//   matrix[1][1] = cos(radTheta) * cos(radAlpha);
//   matrix[1][2] = -cos(radTheta) * sin(radAlpha);
//   matrix[1][3] = a * sin(radTheta);

//   matrix[2][0] = 0;
//   matrix[2][1] = sin(radAlpha);
//   matrix[2][2] = cos(radAlpha);
//   matrix[2][3] = d;

//   matrix[3][0] = 0;
//   matrix[3][1] = 0;
//   matrix[3][2] = 0;
//   matrix[3][3] = 1;
// }