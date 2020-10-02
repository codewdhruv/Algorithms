lst = []
num = int(input("Enter the size of the array: "))
print("Enter array elements: ")
for n in range(num):
  numbers = int(input())
  lst.append(numbers)

c = int(input("1.Largest Number \n 2.Smallest Number"))

if (c==1):
  smallest(num, lst)
else if(c==2):
  largest(num, lst)
else:
  print("Enter a valid input")

def smallest(int num, int lst):
  small = lst[0]
  for n in range(num):
    if(lst[n] < small):
      small = lst[n]
  print("The smallest element of the given list is:", small)

def largest(int num, int lst):
  large = lst[0]
  for n in range(num):
    if(lst[n] > large):
      small = lst[n]
  print("The largest element of the given list is:", large)

