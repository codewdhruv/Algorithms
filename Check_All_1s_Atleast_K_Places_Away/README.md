DRY RUN

Here I uses a 2 pointer approach.
I have a start pointer and end pointer.Start pointer starts from 0 and end pointer starts from 1.

-> So my idea is if number[start] is 1 and number[end] is also 1 then we calculate the distance between them.
-> If the distance < k, we can directly return false.
-> Otherwise we can check whether we reach the end pointer to the last of array, if not we have to move our start pointer to the position of current end pointer.
-> These steps are done when we have both nums[start] and nums[end] = 1.
-> If its not the condition, if nums[start] != 1, then we have to move the start pointer by 1 and we stop our start pointer only if we see a 1.


-> If all these conditions satisfies and we gets out of the loop, then we can return true.



1) 
s e
1 0 0 0 1 0 0 1 




2) 
s   e
1 0 0 0 1 0 0 1 



3)
s     e
1 0 0 0 1 0 0 1 



4)
s - 3 - e
1 0 0 0 1 0 0 1 



5) Updated s to e
         
	s e
1 0 0 0 1 0 0 1 



6)
s   e
1 0 0 1 

7)Here we reach our end = length
s -2- e
1 0 0 1


So here our k is 2 and our distance between all 1s is 3, 2 which is <= k.

Note: here we dont want extra condition to check for the whole length = 6, it will be automatically checked in the code.

