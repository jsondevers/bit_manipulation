
def and_operator(x, y):
    return x & y

def or_operator(x, y):
    return x | y

def xor_operator(x, y):
    return x ^ y

def right_shift(x, y):
    return x >> y

def not_operator(x):
    return ~x

def left_shift(x, y):
    return x << y

while True:
    x = input("Enter X: ")
    y = input("Enter Y: ")
    
    print("Binary representation")
    print("X: ", format(int(x), 'b'))
    print("Y: ", format(int(y), 'b'))
    
    print("X & Y: ", and_operator(int(x), int(y)))
    print("X | Y: ", or_operator(int(x), int(y)))
    print("X ^ Y: ", xor_operator(int(x), int(y)))
    print("~X: ", not_operator(int(x)))
    print("~Y: ", not_operator(int(y)))
    print("X >> Y: ", right_shift(int(x), int(y)))
    print("X << Y: ", left_shift(int(x), int(y)))
          
    
    
    
    
