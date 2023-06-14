#include <stdio.h>
#include <string.h>
#include <ctype.h>

int delimit(char *kalimat, char *delimiter)
{
  int count = 0;
  int length = strlen(kalimat);

  for (int i = 0; i < length; i++)
  {
    if (!isalpha(kalimat[i]))
    {
      delimiter[count] = kalimat[i];
      count++;
    }
  }
  return count;
}

int main()
{
  char kalimat[100];
  char delimiter[100];
  char arrKata[100][100];
  int jumlahKata = 0;

  printf("Masukkan kalimat: ");
  gets(kalimat);

  delimit(kalimat, delimiter);

  char *kata = strtok(kalimat, delimiter);

  while (kata != NULL)
  {
    strcpy(arrKata[jumlahKata], kata);
    jumlahKata++;
    kata = strtok(NULL, delimiter);
  }

  printf("Kata-kata dalam array:\n");
  for (int i = 0; i < jumlahKata; i++)
  {
    printf("%s\n", arrKata[i]);
  }
  return 0;
}
