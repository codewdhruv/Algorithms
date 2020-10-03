# Find unique element from an array

Given an input arrar, find the unique elements from it.  
2 apporaches have been given here. The most interesting and simplest approach is to find the xor of all elements.  This will have time complexity of O(n) and space complexity of O(1)

a XOR 0 = a
a XOR a = 0

this 2 principles will give us the solution.
Another approach is to use a hash table
