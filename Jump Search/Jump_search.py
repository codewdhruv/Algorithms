import math

def jumpSearch(arr, num,n):
    step = int(math.floor(math.sqrt(n)))
    prev = 0
    while arr[min(step, n) - 1] < num:
        prev = step
        step += int(math.floor(math.sqrt(n)))
        if prev >= n:
            return -1

    while arr[prev] < num:
        prev = prev + 1
        if prev == min(step, n):
            return -1
    if arr[prev] == num:
        return prev
    return -1

if __name__ == "__main__":
    user_in = input("Enter numbers separated by spaces: ").strip()
    arr = [int(item) for item in user_in.split(" ")]
    num = int(input("Enter the number to be searched: "))
    n=len(arr)
    index = jumpSearch(arr,num,n)
    if index == -1:
        print("Number",num,"is not found")
    else:
        print("Number",num,"is found at index",index)
