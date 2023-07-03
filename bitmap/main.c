#include "stdio.h"

FILE *fl;
FILE *flNeg;
char buf[256];
char pixel[3];

int main()
{

  fl = fopen("input.BMP", "rb");
  flNeg = fopen("output.BMP", "wb");

  fread(buf, 1, 54, fl);
  fwrite(buf, 1, 54, flNeg);

  while (fread(pixel, 1, 3, fl))
  {
    // Menukar komponen Red (R) dengan komponen Blue (B)
    char temp = pixel[0];
    pixel[0] = pixel[2];
    pixel[2] = temp;

    // Membuat gambar menjadi lebih terang
    for (int i = 0; i < 3; i++)
    {
      if (pixel[i] <= 200)
      {
        pixel[i] += 55;
      }
      else
      {
        pixel[i] = 255;
      }
    }

    fwrite(pixel, 1, 3, flNeg);
  }

  fclose(fl);
  fclose(flNeg);

  return 0;
}
