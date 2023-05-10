class java_lang
{
	static void print_fahr_conv_using_for()
	{
		double fahr, celsius;

		System.out.println("Converion of fahr - celsius using for loop");
		for(fahr = 0; fahr <= 100; fahr += 20)
		{
			celsius = 5 * (fahr - 32) / 9;
			System.out.println(String.format("%3.0f",fahr) + "\t" + String.format("%5.1f",celsius));
		}
	}
	static void print_fahr_conv_using_while()
	{
		double fahr, celsius;
		int lower,upper,step;

		lower = 0;
		upper = 100;
		step = 20;

		fahr = lower;
		System.out.println("Converion of fahr - celsius using while loop");
		while (fahr <= upper )
		{
			celsius = 5 * (fahr - 32) / 9;
			System.out.println(String.format("%3.0f",fahr) + "\t" + String.format("%5.1f", celsius));
			fahr += step;
		}
	}
	static double square(double x)
	{
		return x*x;
	}
	static void print_square(double x)
	{
		System.out.println("The square of " + String.format("%.2f",x) + " is " + String.format("%.2f",square(x)));
	}
	static void print_hello() 
	{
		System.out.println("Hello, World!");
	}
	public static void main(String[] args)
	{
		print_hello();
		print_square(1.234);
		print_fahr_conv_using_while();
		print_fahr_conv_using_for();
	}
}
