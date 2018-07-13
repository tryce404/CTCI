#include <iostream>
using namespace std;

#define N 4

void reverseColumns(int arr[N][N]) {
  for (int i=0; i<N; i++)
    for (int j=0,  k=N-1; j<k; j++,k--)
      swap(arr[j][i], arr[k][i]);
}

void reverseRows(int arr[N][N]) {
  for (int i=0; i<N; i++)
    for (int j=0,  k=N-1; j<k; j++,k--)
      swap(arr[i][j], arr[i][k]);
}

void transpose(int arr[N][N]) {
  for (int i=0; i<N; i++)
    for (int j=i; j<N; j++)
      swap(arr[i][j], arr[j][i]);
}

void printMatrix(int arr[N][N]) {
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++)
      cout << arr[i][j] << " ";
    cout << endl;
    }
  cout << endl;
}

int main() {
  cout << "Type 'yes' if you would like to rotate to the left" << endl;
  string input;
  cin >> input;
  
	
  int arr[N][N]= { {1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}
  };

  cout << "Original Matrix" << endl;
  printMatrix(arr);

  cout << "Transpose" << endl;
  transpose(arr);
  printMatrix(arr);

  cout << "Rotated by 90 degress" << endl;
  if(input == "yes")
    reverseColumns(arr);
  else
    reverseRows(arr);
  printMatrix(arr);
  return 0;
}
