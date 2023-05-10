#include <stdio.h>
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
}

