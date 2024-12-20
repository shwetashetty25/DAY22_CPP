#include <iostream>
using namespace std;

// function with 2 parameter declarations and defination
void addition(int &a, int &b) // Formal parameter a and b
{
    int c = a + b;
    cout << "Addition is " << c << endl;
}
int main()
{
    // Value can asked to user and pass num1 and num2 as argument for function addition
    int num1 = 10;
    int num2 = 20;
    addition(num1, num2); // Passing actual parameter

    // direct value for a and b
    // addition(10,20); //Passing a and b values (arguments)
    return 0;
}