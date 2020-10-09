BISECTION METHOD

This method is used to find the root of an equation between two numbers a and b, assuming that f(x) is continuous on [a,b] and there exists a value c in [a,b] such that f(c)=0.

1.  We first take input two numbers a and b such that f(a)\*f(b)<0.
    2.Then we take the arithmetic mean of a and b and assign it to c. Then we check whether f(c)=0. If f(c) is not 0, we assign the value of c either to a or b.( a=c if f(a) and f(c) have the same sign or b=c if f(b) and f(c) have the same).
    We repeat the process till f(c)=0. Since in some cases the correct root is not obtained, f(c) never becomes zero. Hence in order to avoid an infinite process, we give a limiting condition depending on the difference of a and b.
