# Program to check whether the number is a palindrome or not

num=int(input("Enter a number:"))
temp=num
rev=0
while(num>0):
    dig=num%10
    rev=rev*10+dig
    num=num//10
if(temp==rev):
    print("The number "+str(temp)+" is a palindrome")
else:
    print("The number "+str(temp)+" is not a palindrome")
