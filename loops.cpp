/*
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter Number: ";
	cin >> n;
	
	if(n%2==0){
		cout << "Even Number\n";
	}else{
		cout << "Odd Number\n";
	}
   return 0;
}


#include <iostream>
using namespace std;
int main() {
	int marks;
	cout << "Enter Marks: ";
	cin >> marks;
	
	if(marks>=90){
		cout << "A\n";
	}else if (marks>=80 && marks<90){
		cout << "B\n";
	}else if (marks>=70 && marks<80){
		cout << "C\n";
	}else if (marks>=60 && marks<70){
		cout << "D\n";
	}else if (marks>=50 && marks<60){
		cout << "E\n";
	}else if (marks>=40 && marks<50){
		cout << "F\n";
	}else {
		cout << "Better Luck next Time!";
	}
   return 0;
}

#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "Enter Character: ";
	cin >> ch;
	
	if(ch>='a' && ch<='z'){
		cout << "LowerCase\n";
	}else {
		cout << "UpperCase\n";
	}
   return 0;
}

#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "Enter Character: ";
	cin >> ch;
	
	if(ch>= 65 && ch<= 90){
		cout << "UpperCase\n";
	}else {
		cout << "LowerCase\n";
	}
   return 0;
}

Tertiary Operator Example
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    
    // Tertiary Operator
    int max = (a > b) ? a : b; // If a is greater than b, max is a, else max is b
    cout << "Max is: " << max << endl;
    return 0;
}

while Loop Example
#include <iostream>
using namespace std;
int main() {
    int i = 1;
    while (i <= 5) {
        cout << "Hello World " << i << endl;
        i++;
    }
    return 0;
}

#include <iostream>
using namespace std;    
int main() {
    int i = 1;
    do {
        cout << "Hello World " << i << endl;
        i++;
    } while (i <= 5);
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Hello World " << i << endl;
    }
    return 0;
}

Sum of first n natural numbers using for loop
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i; // sum = sum + i
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}

Sum of all odd numbers from 1 to n using for loop
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Check if i is odd
            sum += i; // sum = sum + i
        }
    }
    cout << "Sum of all odd numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}

Sum of all even numbers from 1 to n using for loop
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Check if i is even
            sum += i; // sum = sum + i
        }
    }
    cout << "Sum of all even numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}

Check if a number is prime using for loop
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true; // Assume n is prime
    if (n <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) { // If n is divisible by i, it's not prime
                isPrime = false;
                break; // No need to check further
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true; // Assume n is prime
    if (n <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) { // If n is divisible by i, it's not prime
                isPrime = false;
                break; // No need to check further
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}

Nested Loops Example
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 3; i++) { // Outer loop
        for (int j = 1; j <= 2; j++) { // Inner loop
            cout << "i: " << i << ", j: " << j << endl;
        }
    }
    return 0;
}

Sum of all Numbers from 1 to n which are divisible by 3 
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) { // Check if i is divisible by 3
            sum += i; // sum = sum + i
        }
    }
    cout << "Sum of all numbers from 1 to " << n << " which are divisible by 3 is: " << sum << endl;
    return 0;
}

Print Multiplication Table of a Number
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}

Print Factorial of a Number
#include <iostream> 
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long factorial = 1; // Use long long to handle large results
    for (int i = 1; i <= n; i++) {
        factorial *= i; // factorial = factorial * i
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}

Print Fibonacci Series up to n terms
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0, b = 1; // First two terms
    cout << "Fibonacci Series: " << a << ", " << b;

    for (int i = 3; i <= n; i++) {
        int next = a + b; // Next term is the sum of the previous two
        cout << ", " << next;
        a = b; // Update a to the last term
        b = next; // Update b to the new term
    }
    cout << endl;
    return 0;
}

Print Prime Numbers up to n
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        bool isPrime = true; // Assume i is prime
        for (int j = 2; j * j <= i; j++) { // Check divisibility
            if (i % j == 0) {
                isPrime = false; // Not prime
                break;
            }
        }
        if (isPrime) {
            cout << i << " "; // Print prime number
        }
    }
    cout << endl;
    return 0;
}


*/