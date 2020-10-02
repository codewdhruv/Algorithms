# Banker’s Algorithm🍎

Implement the banker’s algorithm for deadlock avoidance in C

## Why Banker’s algorithm is named so?🤔

Banker’s algorithm is named so because it is used in banking system to check whether loan can be sanctioned to a person or not. Suppose there are n number of account holders in a bank and the total sum of their money is S. If a person applies for a loan then the bank first subtracts the loan amount from the total money that bank has and if the remaining amount is greater than S then only the loan is sanctioned. It is done because if all the account holders comes to withdraw their money then the bank can easily do it.

In other words, the bank would never allocate its money in such a way that it can no longer satisfy the needs of all its customers. The bank would try to be in safe state always

## How to run?🏃‍♂️🏃‍♂️

Navigate into the folder containing the code and input.txt then run

```sh
gcc code.c
```

This will create an code.exe in the same directory. Now run

```sh
code.exe
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
