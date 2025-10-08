#include <iostream>

using namespace std;

/*

Note:-
The number of columns must be known at compile time.
The compiler needs this to calculate the memory offset for matrix1[i][j].

*/

// matrix addition
void matrixAddition(int matrix1[][3], int matrix2[][3], int result[][3], int rows, int cols)
{
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
}

// matrix subtraction
void matrixSubtraction(int matrix1[][3], int matrix2[][3], int result[][3], int rows, int cols)
{
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      result[i][j] = matrix1[i][j] - matrix2[i][j];
    }
  }
}

int main()
{
  int matrix1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matrix2[][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
  int rows = 3;
  int cols = 3;

  int sum[3][3];
  int difference[3][3];

  matrixAddition(matrix1, matrix2, sum, rows, cols);

  matrixSubtraction(matrix1, matrix2, difference, rows, cols);

  cout << "Matrix Addition:" << endl;
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      cout << sum[i][j] << " ";
    }
    cout << endl;
  }

  cout << "Matrix Subtraction:" << endl;
  for (int i = 0; i < rows; ++i)
  {
    for (int j = 0; j < cols; ++j)
    {
      cout << difference[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
