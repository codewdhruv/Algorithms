from math import *

root1=(-3+sqrt(3 * 3 - 4 * 4 * (-3)))/ 8 

print("The root obtained with the quadratic formula is : "+str(root1))  

def f(x):                                                  
    return 4 * x * x + 3 * x - 3


a = float(input("Enter a number a such that f(a)>0 :"))
b = float(input("Enter a number a such that f(b)<0 :"))
c = 0

if f(a) * f(b) > 0:                                           
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