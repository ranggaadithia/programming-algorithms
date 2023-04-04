#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.14
#define log(a)
#define log10(a)
#define sqrt(a)

float Add(float a, float b)
{
  return a + b;
}

float Substract(float a, float b)
{
  return a - b;
}

float Multiple(float a, float b)
{
  return a * b;
}

float Devided(float a, float b)
{
  return a / b;
}

float Pangkat(float a, float b)
{
  int i = 1;
  for (i = 1; i <= b; i++)
  {
    return a * i;
  }

  return 0;
}
int Div(int a, int b)
{
  return a / b;
}

int Mod(int a, int b)
{
  return a % b;
}

float Square(float a, float b)
{
  return a * sqrtf(b);
}

// if argument is 3
float SinDegree(float a)
{
  return sin(PI * a / 180);
}

float CosDegree(float a)
{
  return cos(PI * a / 180);
}

float TanDegree(float a)
{
  return tan(PI * a / 180);
}

float Log(float a)
{
  return logf(a);
}

float Ln(float a)
{
  return log10f(a);
}

float Factorial(float a)
{
  int hasil = 1;
  for (int i = 1; i <= a; i++)
  {
    hasil = hasil * i;
  }
  return hasil;
}

float operand1, operand2, c, hasil;
int main(int argc, char **argv)
{
  if (argc == 4)
  {
    operand1 = atof(argv[1]);
    operand2 = atof(argv[3]);

    if (strcmp(argv[2], "+") == 0)
    {
      printf("%0.2f + %0.2f = %0.2f", operand1, operand2, Add(operand1, operand2));
    }
    else if (strcmp(argv[2], "-") == 0)
    {
      printf("%0.2f - %0.2f = %0.2f", operand1, operand2, Substract(operand1, operand2));
    }
    else if (strcmp(argv[2], "*") == 0)
    {
      printf("%0.2f * %0.2f = %0.2f", operand1, operand2, Multiple(operand1, operand2));
    }
    else if (strcmp(argv[2], "/") == 0)
    {
      printf("%0.2f / %0.2f = %0.2f", operand1, operand2, Devided(operand1, operand2));
    }
    else if (strcmp(argv[2], "^") == 0)
    {
      printf("%0.2f ^ %0.2f = %0.2f", operand1, operand2, Pangkat(operand1, operand2));
    }
    else if (strcmp(argv[2], "div") == 0)
    {
      printf("%0.2f div %0.2f = %i", operand1, operand2, Div(operand1, operand2));
    }
    else if (strcmp(argv[2], "mod") == 0)
    {
      printf("%0.2f mod %0.2f = %i", operand1, operand2, Mod(operand1, operand2));
    }
    else if (strcmp(argv[2], "akar") == 0)
    {
      printf("%0.2f akar %0.2f = %0.2f", operand1, operand2, Square(operand1, operand2));
    }
    else
    {
      printf("Sorry. This operation has not declade in this program");
    }
  }
  else if (argc == 3)
  {

    operand1 = atof(argv[2]);
    if (strcmp(argv[1], "sin") == 0) // penting menentukan argv nya hrus benar, urutan array dari 0, 1, 2,...
    {
      printf("sin %0.2f = %0.2f", operand1, SinDegree(operand1));
    }
    else if (strcmp(argv[1], "cos") == 0)
    {
      printf("cos %0.2f = %0.2f", operand1, CosDegree(operand1));
    }
    else if (strcmp(argv[1], "tan") == 0)
    {
      printf("tan %0.2f = %0.2f", operand1, TanDegree(operand1));
    }
    else if (strcmp(argv[1], "log") == 0)
    {
      printf("log %0.2f = %0.2f", operand1, Log(operand1));
    }
    else if (strcmp(argv[1], "ln") == 0)
    {
      printf("ln %0.2f = %0.2f", operand1, Ln(operand1));
    }
    else if (strcmp(argv[1], "factorial") == 0)
    {
      printf("factorial %0.2f = %0.2f", operand1, Factorial(operand1));
    }
    else
    {
      printf("Sorry. This operation has not declade in this program\n");
    }
  }
  else
  {
    printf("Try Again\n");
  }

  return 0;
}