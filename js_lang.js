// Conver fahr-celsius
function print_fahr_conv_using_for()
{
	document.write("Coversion from fahr-celsius using for loop<br>");
	for(fahr = 0; fahr <= 100; fahr += step)
	{
		celsius = 5 * (fahr - 32)/9;
		document.write(fahr.toFixed(0) + "\t" + celsius.toFixed(1) + "<br>");
	}
}
function print_fahr_conv_using_while()
{
	lower = 0;
	upper = 100;
	step = 20;

	fahr = lower;
	document.write("Coversion from fahr-celsius using while loop<br>");
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		document.write(fahr.toFixed(0) + "\t" + celsius.toFixed(1) + "<br>");
		fahr = fahr + step;
	}
}
// Passes the square of given argument
function square(x)
{
	return x*x;
}

// Prints the statement with proper values of the number and it's square
function print_square(x){
 	document.write("The square of " + x.toFixed(2) + " is " + square(x).toFixed(2) + "<br>");
}

// Prints hello
function print_hello() {
	document.write("Hello, World!<br>");
}
