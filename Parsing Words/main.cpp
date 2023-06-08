#include "stdio.h"
#include "string.h"

int main()
{
  char kalimat[100];
  char arrKata[100][100];
  int jumlahKata = 0;
  printf("Masukkan kalimat: ");
  fgets(kalimat, sizeof(kalimat), stdin);

  char *kata = strtok(kalimat, " ,.");
  printf("Kata-kata dalam kalimat:\n");
  while (kata != NULL)
  {
    strcpy(arrKata[jumlahKata], kata);
    jumlahKata++;
    kata = strtok(NULL, " ,.\n");
  }

  printf("Kata-kata dalam array:\n");
  for (int i = 0; i < jumlahKata; i++)
  {
    printf("%s\n", arrKata[i]);
  }

  return 0;
}