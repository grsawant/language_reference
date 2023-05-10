def print_fahr_conv_using_for():
    print("Conversion from fahr-celsius using while loop")
    for fahr in [0, 20, 40, 60, 80, 100]:
        celsius = 5 * (fahr - 32)/ 9;
        print(str(fahr)+ "\t" + str(float("{:.1f}".format(celsius))))

def print_fahr_conv_using_while():
    lower = 0;
    upper = 100;
    step = 20;
    fahr = lower;
    print("Conversion from fahr-celsius using while loop")
    while(fahr <= upper):
            celsius = 5 * (fahr - 32) / 9;
            print(str(float("{:3.0f}".format(fahr))) + "\t" + str(float("{:5.1f}".format(celsius))))
            fahr += step;
            
def square(x):
    return x*x

def print_square(x):
    print("The square of " + str(float("{:.2f}".format(x))) + " is " + str(float("{:.2f}".format(square(x)))))

def print_hello():
    print("Hello, World!")

print_hello();
print_square(1.234);
print_fahr_conv_using_while();
print_fahr_conv_using_for();
