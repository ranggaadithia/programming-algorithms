#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

// math pi / deg * 180

float Add(float a, float b)
{
	return a + b;
}
float Substruc(float a, float b)
{
	return a - b;
}
float Multiply(float a, float b)
{
	return a * b;
}
float Divided(float a, float b)
{
	return a / b;
}

float Exponent(float a, float b)
{
	float total = 1;
	for (int i = 1; i <= b; i++)
	{
		total = total * a;
	}

	return total;
}

float Akar(float a, float b)
{
	return pow(a, 1.0 / b);
}

int Div(int a, int b)
{
	return a / b;
}

int Mod(int a, int b)
{
	return a / b;
}

void print(float a, float b, float c, char *argv)
{
	printf("%.2f %s %.2f = %.2f", a, argv, b, c);
}

int main(int argc, char **argv)
{

	float a, b;

	if (argc == 4)
	{
		a = atof(argv[1]);
		b = atof(argv[3]);

		if (strcmp(argv[2], "+") == 0)
		{
			print(a, b, Add(a, b), argv[2]);
		}
		else if (strcmp(argv[2], "-") == 0)
		{
			print(a, b, Substruc(a, b), argv[2]);
		}
		else if (strcmp(argv[2], "x") == 0)
		{
			print(a, b, Multiply(a, b), argv[2]);
		}
		else if (strcmp(argv[2], "/") == 0)
		{
			print(a, b, Divided(a, b), argv[2]);
		}
		else if (strcmp(argv[2], "pangkat") == 0)
		{
			print(a, b, Exponent(a, b), argv[2]);
		}
		else if (strcmp(argv[2], "akar") == 0)
		{
			print(a, b, Akar(a, b), argv[2]);
		}
		else if (strcmp(argv[2], "div") == 0)
		{
			print(a, b, Div(a, b), argv[2]);
		}
		else if (strcmp(argv[2], "mod") == 0)
		{
			print(a, b, Mod(a, b), argv[2]);
		}
		else
		{
			printf("Invalid");
		}
	}
	else
	{
		printf("Invalid Argument");
	}

	return 0;
}
