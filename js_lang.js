o1=[1,2,3], o2=[3,2,1]
var isDeepEqual = (o1, o2) => {
	const isObjects = isObject(o1) && isObject(o2);
	console.log(o1);
	console.log(o2);
	if(!isObjects && o1 !== o2) {console.log("hello");return false;}
	else {
		const o1Keys = Object.keys(o1);
		const o2Keys = Object.keys(o2);
		if (o1Keys.length !== o2Keys.length) {console.log("hello");return false};
		for (var key of o1Keys) {
			const value1 = o1[key];
			const value2 = o2[key];
			const isObjects = isObject(value1) && isObject(value2)
			if ((isObjects && !isDeepEqual(value1, value2)) ||
				(!isObjects && value1 !== value2))  {console.log("hello");return false};
		}
	}
  return true;
};

var isObject = (object) => {
  return object != null && typeof object === "object";
};
Array.prototype.last = function() {
	if(this.length > 0)
		return this[this.length - 1];
	else
		return -1;
};
function print_array_last()
{
	const arr = [1,2,3];
	document.write("The last element of arr is " + arr.last() + "<br>");
}
function print_delay() 
{
	let t = Date.now()
	sleep(3000).then(() => document.write("This was typed after a delay of " + (Date.now() - t) + " milliseconds.<br>" ));
}
async function sleep(millis) {
	return new Promise((resolve) => setTimeout(resolve, millis));
}
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
