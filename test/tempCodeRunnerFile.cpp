  int panjang = strlen(kalimat);
  if (kalimat[panjang - 1] == '\n')
  {
    kalimat[panjang - 1] = '\0'; // Menghapus karakter newline
  }