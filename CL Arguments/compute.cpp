#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

// 4 arguments
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
	return a % b;
}

// print 4 arguments to terminal
void print(float a, float b, float c, char *argv)
{
	printf("%.2f %s %.2f = %.2f", a, argv, b, c);
}

// degree to radian
float degToRad(float deg)
{
	return (deg * M_PI / 180);
}

// 3 arguments
float Sin(float a)
{
	return sin(degToRad(a));
}

float Cos(float a)
{
	return cos(degToRad(a));
}
float Tan(float a)
{
	return tan(degToRad(a));
}
float Log(float a)
{
	return log10(a);
}
float Ln(float a)
{
	return log(a);
}

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
	if (argc == 3)
	{
		a = atof(argv[2]);

		if (strcmp(argv[1], "sin") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Sin(a));
		}
		else if (strcmp(argv[1], "cos") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Cos(a));
		}
		else if (strcmp(argv[1], "cos") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Cos(a));
		}
		else if (strcmp(argv[1], "tan") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Tan(a));
		}
		else if (strcmp(argv[1], "log") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Log(a));
		}
		else if (strcmp(argv[1], "ln") == 0)
		{
			printf("%s %.1f = %.2f", argv[1], a, Ln(a));
		}
		else if (strcmp(argv[1], "factorial") == 0)
		{
			printf("%s %.f = %i", argv[1], a, Factorial(a));
		}
	}

	return 0;
}
