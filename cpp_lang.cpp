#include <iostream>
/* Needed for setprecision() */
#include <iomanip>
#include <vector>
std::vector<int> twoSum(std::vector<int>& nums, int target)
{
			int i, j;
			std::vector<int> result;
			for (i = 0; i <= sizeof(nums); ++i) {
				for(j = 0;j <= sizeof(nums); ++j) {
					if(i != j && (nums[i] + nums[j]) == target) {
							result[0] = i;
							result[1] = j;
					}
					return result;
				}
			}
}
void find_index_of_sum()
{
	std::vector<int> nums = {2,7,11,15};
	int target = 9;
	std::vector<int> result = twoSum(nums, target);
	int first, second;
	first = result[0];
	second = result[1];
	std::cout << first << " " << second << "\n";
}
int main()
{
	find_index_of_sum();
	return 0;
}

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
