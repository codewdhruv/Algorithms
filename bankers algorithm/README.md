### Banker's Algorithm
*The banker’s algorithm is a resource allocation and deadlock avoidance
algorithm that tests for safety by simulating the allocation for predetermined
maximum possible amounts of all resources, then makes an “s-state” check to test
for possible activities, before deciding whether allocation should be allowed to
continue.*

###### input format is given in the input.txt file

pno</t> a   b   c   a   b   c <br/>
0   7   5   3   0   1   0 <br/>
1   3   2   2   2   0   0 <br/>
2   9   0   2   3   0   2 <br/>
3   2   2   2   2   1   1 <br/>
4   4   3   3   0   0   2 <br/>

*first coloum is for the process nummber,next three resources are for maximum requirements and the second three are the already allocated resource instances*<br/>
*you can play around with the code taking different number of processes and resources(up to 26 possible with this code)*<br/>
*in this samble input the no. of resources is 3 and the total number of instances for these resources can be entered be the user.*<br/>
*user can also give one more additional request to the existing snap shot of processes*<br/>
*keep the format the same and feel free to play around with the code*<br/>

###### Output
*can be found in the output.txt file*
