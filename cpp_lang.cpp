#include <iostream>
/* Needed for setprecision() */
#include <iomanip>
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
}
