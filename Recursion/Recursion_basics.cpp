/*
What is recursion ? 
Recursion is basically the function calling itself(ie, with different parameters)

ex : F(n) = F(n-1) + F(n-2)
the above example is infinite, ie, for every value of n, there exists n-1 and n-2, hence we have to provide conditions to terminate it

generally for smaller values, we manually calculate it and its called the BASE CASE
ex: f(0) and f(1)
The Base case will be the terminating case

if the base case is not defined, then the recursion or the recurrence relation will run indefinatly that can lead to time limit exceeded or stack limit exceeded


all the function calls are stored in the function call stack


Whenever there is a recursive function we break it down into three parts : 
State
Base Condtion
Transition

State : State is the function parameter that changes during recursion
ex: F(n) = F(n-1) + F(n-2), here n is the state

Base condition:
These are very important to terminate the base condition
Base condition or case is hardcoding the answer for some values of the state(generally 0 and 1) which we can calulate manually

Transition : we call it a sub problem or a recursive call or transition, it basically shows how the state depends on other states to calculate
its value  

The time complexity for Recursion is 2^N

*/  

