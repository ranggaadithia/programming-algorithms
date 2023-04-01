// #include <iostream>

// // math pi / deg * 180

// int main(int argc, char **argv)
// {

//   for (int i = 0; i < argc; i++)
//   {
//     printf("%s\n", argv[i]);
//   }
//   return 0;
// }

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

int Factorial(int a)
{
  if (a == 0 || a == 1)
  {
    return 1;
  }
  else
  {
    return a * Factorial(a - 1);
  }
}

int main(int argc, char **argv)
{
  float a;
  a = atof(argv[2]);
  printf("%s %.1f = %i", argv[1], a, Factorial(a));
  return 0;
}
