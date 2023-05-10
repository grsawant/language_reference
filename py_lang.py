def square(x):
    return x*x

def print_square(x):
    print("The square of " + str(float("{:.2f}".format(x))) + " is " + str(float("{:.2f}".format(square(x)))))

def print_hello():
    print("Hello, World!")

print_hello();
print_square(1.234)
