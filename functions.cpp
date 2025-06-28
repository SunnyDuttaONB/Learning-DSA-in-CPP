//Function Syntax in C++
#include <iostream>
using namespace std;    
// Function to add two numbers
int add(int a, int b) {
    return a + b; // Return the sum of a and b
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2; // Input two numbers
    int sum = add(num1, num2); // Call the add function
    cout << "Sum: " << sum << endl; // Output the sum
    return 0; // Return 0 to indicate successful execution
}

//Factorial of a Number using Function
#include <iostream>
using namespace std;
// Function to calculate factorial
long long factorial(int n) {
    long long result = 1; // Initialize result to 1
    for (int i = 1; i <= n; i++) {
        result *= i; // Multiply result by i
    }
    return result; // Return the factorial
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input a number
    long long fact = factorial(n); // Call the factorial function
    cout << "Factorial of " << n << " is: " << fact << endl; // Output the factorial
    return 0; // Return 0 to indicate successful execution
}

//Calculate the sum of digits of a number using Function
#include <iostream>
using namespace std;
// Function to calculate the sum of digits
int sumOfDigits(int n) {
    int sum = 0; // Initialize sum to 0
    while (n > 0) {
        sum += n % 10; // Add the last digit to sum
        n /= 10; // Remove the last digit
    }
    return sum; // Return the sum of digits
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input a number
    int sum = sumOfDigits(n); // Call the sumOfDigits function
    cout << "Sum of digits of " << n << " is: " << sum << endl; // Output the sum of digits
    return 0; // Return 0 to indicate successful execution
}

// To find binomial coefficient using function
#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i; // Calculate factorial
    }
    return fact; // Return the factorial
}

int binomialCoefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k)); // Calculate binomial coefficient
}