/*
(42) Binary System
The binary system is a base-2 numeral system that uses only two symbols: 0 and 1. It is the foundation of all binary code, which is used to write data in computers and other digital systems. In the binary system, each digit represents a power of 2, starting from the rightmost digit which represents 2^0.

(42)base 10 = 101010
(52)base 10 = 110100
(62)base 10 = 111110
(72)base 10 = 1001000
(82)base 10 = 1010010
(92)base 10 = 1100100
(102)base 10 = 1110010
(112)base 10 = 10001000
(122)base 10 = 10101100
(132)base 10 = 11001100
(142)base 10 = 11101100
(152)base 10 = 100101000
(50)base 10 = 11001000
(60)base 10 = 11110000
(70)base 10 = 100011000
(80)base 10 = 101010000
(90)base 10 = 110001000
(100)base 10 = 111010000


Decimal to Binary Conversion
#include <iostream>
using namespace std;
    int decToBinary(int decNum) {
        int ans = 0, pow = 1;

        while (decNum > 0) {
            int rem = decNum % 2; // Get the remainder when divided by 2
            decNum /= 2; // Divide the number by 2

            ans += (rem * pow); // Add the remainder multiplied by the current power of 10
            pow *= 10; // Increase the power of 10 for the next digit

        }
            return ans; // Return the binary representation
    }

    int main() {
        int decNum;
        cout << "Enter a decimal number: ";
        cin >> decNum; // Input a decimal number

        int binaryNum = decToBinary(decNum); // Convert to binary
        cout << "Binary representation: " << binaryNum << endl; // Output the binary representation

        return 0; // Return 0 to indicate successful execution
    }


    Binary to Decimal Conversion
#include <iostream> 
using namespace std;
    int binToDecimal(int binNum) {
        int ans = 0, pow = 1;

        while (binNum > 0) {
            int rem = bunNum % 10; // Get the last digit

            ans += (rem * pow); // Add the digit multiplied by the current power of 2

            pow *= 2; // Increase the power of 2 for the next digit

            binNum /= 10; // Remove the last digit
        }      
            
            
            return ans; // Return the decimal representation
            }

            int main() {
                int binNum;
                cout << "Enter a binary number: ";
                cin >> binNum; // Input a binary number

                int decimalNum = binToDecimal(binNum); // Convert to decimal
                cout << "Decimal representation: " << decimalNum << endl; // Output the decimal representation

                return 0; // Return 0 to indicate successful execution
            }








            Common Numbers
            0 = 0
            1 = 01
            2 = 10
            3 = 11
            4 = 100
            5 = 101 
            6 = 110
            7 = 111
            8 = 1000
            9 = 1001
            10 = 1010
            
            (Converse -8 to binary)











*/