// Problem-1: Create a small calculator which performs operations such as Addition, Subtraction, Multiplication and Division using class.
//   Calculator inputs :> ‘a’, ‘b’ and ‘type of operation’
//   Datatype :> ‘a’ = double, ‘b’ = double, ‘type of operation’ = string

#include <bits/stdc++.h>
using namespace std;

void calculator(double a, double b, string operation){
    if (operation == "add"){
        cout << "Result = " << a + b;
    }
    else if (operation == "sub"){
        cout << "Result = " << a - b;
    }
    else if (operation == "mul"){
        cout << "Result = " << a * b;
    }
    else if (operation == "div"){
        if (b != 0){
            cout << "Result = " << a / b;
        }
        else{
            cout << "Division by zero is invalid";
        }
    }
    else{
        cout << "Invalid operation";
    }
}

int main(){
    double num1, num2;
    string operation;
    cout << "Enter value of a: ";
    cin >> num1;
    cout << "Enter value of b: ";
    cin >> num2;
    cout << "Enter operation (add, sub, mul, div): ";
    cin >> operation;
    calculator(num1, num2, operation);
    return 0;
}
