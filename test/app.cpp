#include <stdio.h>
#include <string.h>

int main()
{
  char kalimat[100];
  printf("Masukkan kalimat: ");
  fgets(kalimat, sizeof(kalimat), stdin);

  char *kata = strtok(kalimat, " ");
  printf("Kata-kata dalam kalimat:\n");
  while (kata != NULL)
  {
    printf("%s\n", kata);
    kata = strtok(NULL, " ");
  }

  return 0;
}