// Passes the square of given argument
function square(x)
{
	return x*x;
}

// Prints the statement with proper values of the number and it's square
function print_square(x){
	document.write("The square of " + x.toFixed(2) + " is " + square(x).toFixed(2));
}

// Prints hello
function print_hello() {
	document.write("Hello, World!<br>");
}
