#include <iostream>
using namespace std;

int main(){
// cout << "Hello, World!\n";
// cout << "Hello, World!" << endl;
// cout << "Hello, World!" << '\n'; 
//char grade = 'A';
//int value = grade; // Implicit conversion from char to int
//cout << value << endl; // Outputs the ASCII value of 'A'
double price = 10.99;
int newPrice = (int)price; // Implicit conversion from double to int
cout << newPrice << endl; // Outputs 10
return 0;
}

/*
int = 4 Bytes
char = 1 Byte
short = 2 Bytes
float = 4 Bytes
long = 8 Bytes
bool = 1 Byte
double = 8 Bytes


Type Casting (Converting Data from one Type to another ):- 1)conversion(implicit) eg: small->big
2) casting(explicit) eg: big->small

cin is used to take input 
double price;
cout << "Enter the Price: ";
cin >> price;
cout << "Your Entered Price is = " << price << endl

Sum of 2 Numbers:-
#include<iostream>
using namespace std;

int main(){
int a,b;
cout << "enter a: ";
cin >> a;
cout << "enter b: ";
cin >> b;
int sum = a + b;    
cout << "Sum is: " << sum << endl;  
return 0;
}

Cpp program to make a simple calculator
#include <iostream>
using namespace std;
int main() {
    int a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    return 0;
}
*/