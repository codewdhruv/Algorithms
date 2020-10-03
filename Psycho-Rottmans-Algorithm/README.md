# Psycho Rottman's Algorithm
This is a simple challenge in HackerRank.
 Do check it out [Psycho Rottman's Algorithm](https://www.hackerrank.com/contests/the-dakittio-code/challenges/psycho-rottmans-algorithm/problem) .

## Problem Definition

Rottman is about to retire and is looking for an employee to inherit his office. Assuming that he has the largest count of work hours every week, he wants to pick the employee with the second largest count of work hours as his successor.You will be provided the work hours of all employees, including professers and other heads. 

**You have to find the person with the second largest count of weeekly work hours. If more than one have the same weekly work hours then select the first one. If there are no second largest then print this sentence given inside quotes : "There is no second largest count of work hours"** 

 The solution is given in code.c .

The input and output format is given in input.txt with examples.

##  Constraints

* The numbers should be +ve integers.

* 2<=N<=100

* min element size = 0hrs

* max element size = 168hrs
## Working

Initially set values of variables seclarge and largest as -1 and 0 respectively. Find largest value while reading work hours of employees. Find the second largest work hour by comparing each work hour with seclarge and largest. If value of seclarge still remains -1, then print
 "There is no second largest count of work hours" .
If seclarge is not equal to -1, then print value of seclarge and the employee number of the first person with seclarge as work hour.