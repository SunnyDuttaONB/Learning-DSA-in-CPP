// Bitwise &
// Bitwise | |
// Bitwise ^
// Bitwise ~


// Bitwiswe operators
#include <iostream>
using namespace std;
int main() {
    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary

    // Bitwise AND
    cout << "Bitwise AND: " << (a & b) << endl; // 0001 in binary, which is 1 in decimal

    // Bitwise OR
    cout << "Bitwise OR: " << (a | b) << endl; // 0111 in binary, which is 7 in decimal

    // Bitwise XOR
    cout << "Bitwise XOR: " << (a ^ b) << endl; // 0110 in binary, which is 6 in decimal

    // Bitwise NOT
    cout << "Bitwise NOT of a: " << (~a) << endl; // Inverts all bits of a
    cout << "Bitwise NOT of b: " << (~b) << endl; // Inverts all bits of b

    return 0;
}

// Bitwise Shift Operators
#include <iostream> 
using namespace std;
int main() {
    int a = 5; // 0101 in binary

    // Left Shift
    cout << "Left Shift: " << (a << 1) << endl; // 1010 in binary, which is 10 in decimal

    // Right Shift
    cout << "Right Shift: " << (a >> 1) << endl; // 0010 in binary, which is 2 in decimal

    return 0;
}

/*
a << b => ans = a*2^b;
a >> b => ans = a/2^b;


Operator Precedence


1)Write a program to reverse an Integer n
using loops and bitwise operators.

2) Figure out how to find if a number is power of 2 without any loop


*/
