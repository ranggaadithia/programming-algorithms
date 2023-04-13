#include "stdio.h"

int main()
{
  int matrix1[2][3];
  int matrix2[3][2];

  printf("Masukan Matrix Pertama : \n");
  for (int i = 0; i < 2; i++)
  {
    for (size_t j = 0; j < 3; j++)
    {
      printf("Element [%d][%d] : ", i, j);
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("Masukan Matrix Kedua : \n");
  for (int i = 0; i < 3; i++)
  {
    for (size_t j = 0; j < 2; j++)
    {
      printf("Element [%d][%d] : ", i, j);
      scanf("%d", &matrix2[i][j]);
    }
  }

  printf("Matrix Pertama: \n");
  for (int i = 0; i < 2; i++)
  {
    for (size_t j = 0; j < 3; j++)
    {
      printf("%d ", matrix1[i][j]);
    }
    printf("\n");
  }

  printf("Matrix Kedua: \n");
  for (int i = 0; i < 2; i++)
  {
    for (size_t j = 0; j < 3; j++)
    {
      printf("%d ", matrix1[i][j]);
    }
    printf("\n");
  }
}