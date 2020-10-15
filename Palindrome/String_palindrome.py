# Program to check whether the string is a palindrome or not

string=input("Enter the string = ")
string= string.casefold() # make it suitable for caseless comparison
if(string==string[::-1]):
    print("The string "+string+" is a palindrome")
else:
    print("The string "+string+" is not a palindrome")
