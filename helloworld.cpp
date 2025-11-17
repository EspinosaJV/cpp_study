#include <iostream>

int main(){
    //1. Addition Operation (+)
    //It adds two numbers together
    int a = 1;
    int b = 2;
    int sum = a + b;

    //2. Subtraction Operator (-)
    //It subtracts one number from another.
    int difference = a - b;

    //3. Multiplication Operator (*)
    //It multiplies two numbers together.
    int product = a * b;

    //4. Division Operator(/)
    //it divides one number by another. Note that IF BOTH OPERANDS ARE INTEGERS, IT WILL PERFFORM INTEGER DIVISION AND THE RESULT WILL BE AN INTEGER.
    int quotient = a / b; // integer division
    float quotient = float(a) / float(b) // floating-point division

    //5. Modulos Operator(%)
    //It calculates the remainder of an integer division.
    int remainder = a % b;

    //6.Increment Operator (++)
    //It increments the value of a variable by 1. There are two ways to use this operator, prefix (++x), and postfix (x++)
    //Prefix increments the value before returning it whereas postfix returns the value first AND THEN increments it
    int x = 5;
    int y = ++x; // x = 6 y = 6
    int z = x++; // x = 7 z = 6

    //7. Decrement Operator(--)
    //It decrements the value of a variable by 1. It can also BE USED IN PREFIX (--X) and postfix(x--) formsz
    int x = 5;
    int y = --x;
    int z = x--;
}