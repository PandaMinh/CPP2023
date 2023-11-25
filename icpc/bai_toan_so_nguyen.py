import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

for i in range(int(input())):
    n = input()
    if n == '0':
        print("0")
        print("0")
        print("0")
    else:
        m = str(n)[::-1]
        print(m)
        print(gcd(int(n), int(m)))
        print(int(n) * int(m) // gcd(int(n), int(m)))