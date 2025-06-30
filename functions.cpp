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

int fact(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i; // Calculate factorial
    }
    return fact; // Return the factorial
}

int ncr(int n, int r) {
    int fact_n = fact(n); // Calculate n!
    int fact_r = fact(r); // Calculate r!
    int fact_n_r = fact(n - r); // Calculate (n-r)!
    return fact_n / (fact_r * fact_n_r); // Return the binomial coefficient
}

int main() {
    int n , r;
    cin >> n >> r;
    cout << ncr(n,r) << endl;
}

// Write a function to check if a number is prime or not
#include <iostream>
using namespace std;
// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // If n is divisible by any number other than 1 and itself, it's not prime
    }
    return true; // If no divisors found, n is prime
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input a number
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl; // Output if the number is prime
    } else {
        cout << n << " is not a prime number." << endl; // Output if the number is not prime
    }
    return 0; // Return 0 to indicate successful execution
}

// Write a function to print all prime numbers from 1 to n
#include <iostream>
using namespace std;
// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // If n is divisible by any number other than 1 and itself, it's not prime
    }
    return true; // If no divisors found, n is prime
}
// Function to print all prime numbers from 1 to n
void printPrimes(int n) {   
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) { // Check if i is prime
            cout << i << " "; // Print the prime number
        }
    }
    cout << endl; // New line after printing all primes
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Input a number
    cout << "Prime numbers from 1 to " << n << ": ";
    printPrimes(n); // Call the function to print prime numbers
    return 0; // Return 0 to indicate successful execution
}

//Write a function to print nth Fibonacci number
#include <iostream>
using namespace std;
// Function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0) return 0; // Base case for n = 0
    if (n == 1) return 1; // Base case for n = 1
    int a = 0, b = 1, c; // Initialize first two Fibonacci numbers
    for (int i = 2; i <= n; i++) {
        c = a + b; // Calculate the next Fibonacci number
        a = b; // Update a to the previous Fibonacci number
        b = c; // Update b to the current Fibonacci number
    }
    return b; // Return the nth Fibonacci number
}
int main() {
    int n;
    cout << "Enter the position of Fibonacci number: ";
    cin >> n; // Input the position
    int fib = fibonacci(n); // Call the fibonacci function
    cout << "Fibonacci number at position " << n << " is: " << fib << endl; // Output the Fibonacci number
    return 0; // Return 0 to indicate successful execution
}

