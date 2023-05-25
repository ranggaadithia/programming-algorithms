#include <stdio.h>

void cofactor(int matrix[3][3], int temp[3][3], int p, int q, int n)
{
  int i = 0, j = 0;

  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      if (row != p && col != q)
      {
        temp[i][j++] = matrix[row][col];

        if (j == n - 1)
        {
          j = 0;
          i++;
        }
      }
    }
  }
}

int determinant(int matrix[3][3], int n)
{
  int det = 0;

  if (n == 2)
  {
    return (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);
  }

  int temp[3][3];
  int sign = 1;

  for (int f = 0; f < n; f++)
  {
    cofactor(matrix, temp, 0, f, n);
    det += sign * matrix[0][f] * determinant(temp, n - 1);
    sign = -sign;
  }

  return det;
}

void adjoint(int matrix[3][3], int adj[3][3])
{
  if (3 == 1)
  {
    adj[0][0] = 1;
    return;
  }

  int sign = 1;
  int temp[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cofactor(matrix, temp, i, j, 3);
      sign = ((i + j) % 2 == 0) ? 1 : -1;
      adj[j][i] = (sign) * (determinant(temp, 3 - 1));
    }
  }
}

void inverse(int matrix[3][3], int inv[3][3])
{
  int det = determinant(matrix, 3);

  if (det == 0)
  {
    printf("Matriks tidak memiliki invers\n");
    return;
  }

  int adj[3][3];
  adjoint(matrix, adj);

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      inv[i][j] = adj[i][j] / det;
    }
  }
}

void displayMatrix(int matrix[3][3], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int matrix[3][3];

  printf("Masukkan elemen-elemen matriks 3x3:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  int inverseMatrix[3][3];
  inverse(matrix, inverseMatrix);

  printf("\nMatriks invers:\n");
  displayMatrix(inverseMatrix, 3, 3);

  return 0;
}