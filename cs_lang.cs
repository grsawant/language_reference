public class cs_lang
{
	static void print_fahr_celsius_conv_using_for()
	{
		double fahr,celsius;
		
		System.Console.WriteLine("Conversion of fahr - celsius using for loops");
		for(fahr = 0; fahr <= 100; fahr +=20)
		{
			celsius = 5 * (fahr - 32) / 9;
			System.Console.WriteLine(fahr + "\t" + System.String.Format("{0:.0}",celsius));
		}
	}
	static void print_fahr_celsius_conv_using_while()
	{
		double fahr, celsius;
		int lower, upper, step;

		lower = 0;
		upper = 100;
		step = 20;

		fahr = lower;
		System.Console.WriteLine("Conversion of fahr - celsius using while loops");
		while(fahr <= upper)
		{
			celsius = 5 * (fahr-32) / 9;
			System.Console.WriteLine(fahr + "\t" + System.String.Format("{0:.0}",celsius));
			fahr += step;
		}
	}
	static double square(double x)
	{
		return x*x;
	}
	static void print_square(double x)
	{
		System.Console.WriteLine("The square of " + System.String.Format("{0:0.00}", x) + " is " + System.String.Format("{0:0.00}",square(x)));
	}
	static void print_hello()
	{
		System.Console.WriteLine("Hello, World!");
	}
	public static void Main(string[] args)
	{
		print_hello();
		print_square(1.234);
		print_fahr_celsius_conv_using_while();
		print_fahr_celsius_conv_using_for();
	}
}
