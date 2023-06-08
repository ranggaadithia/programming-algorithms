#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char sentence[100];
  char words[100][50];
  int wordCount = 0;

  printf("Masukkan kalimat: ");
  fgets(sentence, sizeof(sentence), stdin);

  char *token = strtok(sentence, " ,.");
  while (token != NULL)
  {
    // Mengabaikan koma dan titik
    if (token[0] != ',' && token[0] != '.')
    {
      strcpy(words[wordCount], token);
      wordCount++;
    }
    token = strtok(NULL, " ,.");
  }

  printf("Kata-kata yang ditemukan dalam kalimat:\n");
  for (int i = 0; i < wordCount; i++)
  {
    printf("%s\n", words[i]);
  }

  return 0;
}
