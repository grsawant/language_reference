#include <iostream>
/* Needed for setprecision() */
#include <iomanip>
void print_fahr_celsius_conv_using_for()
{
	double fahr,celsius;
	
	printf("Conversion of fahr-celsius using while\n");
	for(fahr = 0; fahr <= 100; fahr += 20)
	{
		celsius = 5 * (fahr-32) / 9;
		std::cout << std::setprecision(3) << std::setw(3) << fahr << "\t" << std::setw(5) << celsius << "\n";
	}
}
void print_fahr_celsius_conv_using_while()
{
	double fahr, celsius;
	int lower,upper, step;

	lower = 0;
	upper = 100;
	step = 20;

	fahr = lower;
	printf("Conversion of fahr-celsius using while\n");
	while(fahr <= upper)
	{
		celsius = 5 * (fahr-32)/ 9;
		std::cout << std::setprecision(3) << std::setw(3) <<fahr<<"\t"<< std::setw(5)<<celsius<<"\n";
		fahr += step;
	}
}
double square(double x)
{
	return x*x;
}
void print_square(double x)
{
	std::cout<< std::setprecision(3) <<"The square of "<<x<<" if "<<square(x)<<"\n";
}
void print_hello()
{
	std::cout<<"Hello, World!\n";
}
int main()
{
	print_hello();
	print_square(1.234);
	print_fahr_celsius_conv_using_while();
	print_fahr_celsius_conv_using_for();
}
