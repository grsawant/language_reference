class java_lang
{
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
	}
}
