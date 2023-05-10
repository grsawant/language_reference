#include <stdio.h>
void print_fahr_celsius_conv_using_for()
{
	double fahr, celsius;
	
	printf("Conversion of fahr - celsius using for loop\n");
	for(fahr = 0; fahr <= 100; fahr += 20)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f\t%5.1f\n", fahr, celsius);
	}
}
void print_fahr_celsius_conv_using_while()
{
	double fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 20;

	fahr = lower;
	printf("Conversion of fahr - celsius using while loop\n");
	while(fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f\t%5.1f\n", fahr, celsius);
		fahr += step;
	}
}
double square(double x)
{
	return x*x;
}
void print_square(double x)
{
	printf("The square of %.2f is %.2f\n", x, square(x));
}
void print_hello()
{
	printf("Hello, World!\n");
}
int main()
{
	print_hello();
	print_square(1.234);
	print_fahr_celsius_conv_using_while();
	print_fahr_celsius_conv_using_for();
}

