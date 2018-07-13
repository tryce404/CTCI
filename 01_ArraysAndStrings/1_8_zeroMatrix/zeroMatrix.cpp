#include <iostream>
#include <iomanip>
using namespace std;

#define M 4
#define N 4

void displayMatrix(int mat[N][N]) {
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cout << setw(3) << mat[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void zeroMatrix(int arr[M][N], int r, int c) {
  for(int i = 0; i < M; i++)
    for(int j = 0; j < N; j++)
      if(i == r || j == c)
        arr[i][j] = 0;
}

void detectZero(int arr[M][N]) {
  int temp[M][N];

  for(int i = 0; i < M; i++)
    for(int j = 0; j < N; j++)
      if(arr[i][j] == 0)
        temp[i][j] = 1;
      else
        temp[i][j] = 0;

  for(int i = 0; i < M; i++)
    for(int j = 0; j < N; j++)
      if(temp[i][j] == 1) 
        zeroMatrix(arr, i, j);
}

int main() {
  int mat[M][N] =
    {
        {1, 2, 3, 4},
        {5, 0, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

  displayMatrix(mat);
  
  detectZero(mat);    

  displayMatrix(mat);
  return 0;
}
