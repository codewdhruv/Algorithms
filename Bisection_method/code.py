Bisection method : This method is used to find the root of an equation between two numbers a and b, assuming that f(x) is continuous on [a,b] and there exists a value c in [a,b] such that f(c)=0. We first take input two numbers a and b such that f(a)*f(b)<0. Then we take the arithmetic mean of a and b and assign it to c. Then we check whether f(c)=0. If f(c) is not 0, we assign the value of c either to a or b.( a=c if f(a) and f(c) have the same sign or b=c if f(b) and f(c) have the same). We repeat the process till f(c)=0. Since in some cases the correct root is not obtained, f(c) never becomes zero. Hence in order to avoid an infinite process, we input the maximum number of iterations from the user.

# Root finding using quadratic formula
from math import *

root1=(-3+sqrt(3 * 3 - 4 * 4 * (-3)))/ 8  # quadratic formula is (-b+sqrt(b * b-4*a*c)/2* a).
                                                # Here a = 4, b = 3, c = -3

print("The root obtained with the quadratic formula is : "+str(root1))  #taking positive root 

# Root finding via bisection method


def f(x):                                                   # defining the given quadratic equation
    return 4 * x * x + 3 * x - 3


a = float(input("Enter a number a such that f(a)>0 :"))
b = float(input("Enter a number a such that f(b)<0 :"))
c = 0

if f(a) * f(b) > 0:                                             # we need f(a)>0 and f(b)<0
    print("Wrong assumptions! The values entered do not support your assumption")

elif f(a) * f(b) == 0:
    if f(a) == 0:
        print("The root of the given quadratic equation is : " + str(a))
    else:
        print("The root of the given quadratic equation is : " + str(b))

else:
    i=1
    while (a-b<0.01):
        c = (a + b) / 2
        print("Iteration " + str(i) + ": a = " + str(a) + " b = " + str(b )+ " c =" + str(c))
        i=i+1
        if f(a) * f(c) == 0:
            print("The exact root of the given quadratic equation is : " + str(c))
            break
        elif f(a) * f(c) > 0:
            a = c
        else:
            b = c
    print("The root of the equation is : " + str(c))