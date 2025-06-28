//PATTERN PRINTING 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Pattern 1: Right-angled triangle
    cout << "Right-angled triangle pattern:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 2: Inverted right-angled triangle
    cout << "Inverted right-angled triangle pattern:" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 3: Pyramid
    cout << "Pyramid pattern:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " "; // Print spaces
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }

    return 0;
}

//Square Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    cout << "Square pattern:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* "; // Print stars
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

//Square Pattern 123 456 789 ..
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Square pattern with numbers:" << endl;
    int num = 1; // Initialize a counter for numbers
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << num << " "; // Print the current number
            num++; // Increment the number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

// Square Pattern with Alphabets
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Square pattern with alphabets:" << endl;
    char ch = 'A'; // Initialize a character for alphabets
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << ch << " "; // Print the current alphabet
            ch++; // Increment to the next alphabet
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

//Triangle Pattern with Numbers
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Triangle pattern with numbers:" << endl;
    int num = 1; // Initialize a counter for numbers
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " "; // Print the current number
            num++; // Increment the number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

// Triangle Pattern with Alphabets
#include <iostream> 
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Triangle pattern with alphabets:" << endl;
    char ch = 'A'; // Initialize a character for alphabets
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " "; // Print the current alphabet
            ch++; // Increment to the next alphabet
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

//Triangle Pattern with Repeated Numbers
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Triangle pattern with repeated numbers:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " "; // Print the current row number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

//Triangle Pattern with 1 1 2 1 2 3 1 2 3 4
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Triangle pattern with increasing numbers:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " "; // Print numbers from 1 to current row number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

// Triangle Pattern with 1 2 3 4 5
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Triangle pattern with numbers from 1 to n:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " "; // Print numbers from 1 to current row number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

// Reverse Triangle Pattern with 1 2 3 4 5
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Reverse triangle pattern with numbers from 1 to n:" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " "; // Print numbers from 1 to current row number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

//Floyd's Triangle Pattern with Numbers
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Floyd's triangle pattern with numbers:" << endl;
    int num = 1; // Initialize a counter for numbers
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " "; // Print the current number
            num++; // Increment the number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

// Inverted Triangle Pattern with Numbers
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    cout << "Inverted triangle pattern with numbers:" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " "; // Print numbers from 1 to current row number
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

//
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
     cout << "Inverted Spaced triangle pattern with numbers:" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " "; // Print spaces
        }
        for (int k = 1; k <= i; k++) {
            cout << k << " "; // Print numbers from 1 to current row number
        }
        cout << endl; // Move to the next line after each row

        return 0;
    }

    //Pyramid Pattern with Numbers
//    #include <iostream> 
//     using namespace std;
//     int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     cout << "Pyramid pattern with numbers:" << endl;
//     for (int i = 1; i <= n; i++) {
//         for (int j = n; j > i; j--) {
//             cout << " "; // Print spaces
//         }
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << k << " "; // Print numbers from 1 to current row number
//         }
//         cout << endl; // Move to the next line after each row
//     }

//     return 0;
// }

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}

✅ 1. Right Half Pyramid
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
✅ 2. Inverted Right Half Pyramid
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
✅ 3. Left Half Pyramid
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) cout << "  ";
        for(int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
    return 0;
}
✅ 4. Inverted Left Half Pyramid
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) cout << "  ";
        for(int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
    return 0;
}
✅ 5. Full Pyramid
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) cout << " ";
        for(int j = 1; j <= 2*i - 1; j++) cout << "*";
        cout << endl;
    }
    return 0;
}

✅ 6. Inverted Full Pyramid
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
    return 0;
}
✅ 7. Half Diamond Star Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }

    return 0;
}
✅ 8. Diamond Shape
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }

    return 0;
}
✅ 9. Alphabet “A” Using Stars
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            if ((j == 0 || j == n) && i != 0 || i == 0 && j != 0 && j != n || i == n / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
✅ 10. Solid Square
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
✅ 11. Hollow Square / Rectangle
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
✅ 12. Staircase Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}

✅ 1. Triangular Pattern of Alphabets
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
✅ 2. Swastika Pattern (odd size)
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "Enter odd value for swastika pattern.\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && (j >= n/2 || j == 0) || // top
                i == n - 1 && (j <= n/2 || j == n - 1) || // bottom
                j == 0 && (i >= n/2 || i == 0) || // left
                j == n - 1 && (i <= n/2 || i == n - 1) || // right
                i == n / 2 || j == n / 2) // middle cross
                cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
✅ 3. Circle Pattern (Hollow Circle Approximation)
cpp
Copy
Edit
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r;
    cin >> r;
    for (int i = -r; i <= r; i++) {
        for (int j = -r; j <= r; j++) {
            if (round(sqrt(i*i + j*j)) == r)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
✅ 4. Diagonal Star Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
✅ 5. Solid Rhombus
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= n; j++) cout << "*";
        cout << endl;
    }

    return 0;
}
✅ 6. Hollow Rhombus
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
✅ 7. Butterfly Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    return 0;
}

✅ 8. Sierpinski Triangle (Simple Version using Stars)
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*n-1; j++) {
            if ((i + j >= n - 1) && (j - i <= n - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
✅ 9. Arrow Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // upper part
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < n; j++) cout << "*";
        cout << endl;
    }

    // lower tip
    for (int i = 0; i < 2 * n - 1; i++) cout << " ";
    cout << "*" << endl;

    return 0;
}
✅ 10. Number Pattern Pyramid
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        num = 1;
        for (int j = 1; j <= n - i; j++) cout << "  ";
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << num << " ";
            if (j < i) num++;
            else num--;
        }
        cout << endl;
    }

    return 0;
}
✅ All Medium Patterns Done!

Now starting with Hard Patterns in C++:

✅ 1. Alphabets A to Z in Star (example: letter A)
cpp
Copy
Edit
#include <iostream>
using namespace std;

void printA(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            if ((j == 0 || j == n) && i != 0 || i == 0 && j != 0 && j != n || i == n / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printA(n);
    return 0;
}
✅ Let me know if you want full A–Z star patterns as a printable library.

✅ 2. Reverse Character Bridge
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (char ch = 'A'; ch < 'A' + i; ch++) cout << ch;
        for (int s = 1; s <= 2*(n - i); s++) cout << " ";
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) cout << ch;
        cout << endl;
    }

    return 0;
}
✅ 3. V and Inverted-V Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // V pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        cout << "*";
        for (int j = 0; j < 2*(n - i - 1); j++) cout << " ";
        if (i != n - 1) cout << "*";
        cout << endl;
    }

    // Inverted V
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) cout << " ";
        cout << "*";
        for (int j = 0; j < 2*(n - i - 1); j++) cout << " ";
        if (i != n - 1) cout << "*";
        cout << endl;
    }

    return 0;
}


✅ 4. Trapezium Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int rows, width;
    cin >> rows >> width;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < width + i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
🔹 rows is the number of lines, and width is the top width.

✅ 5. Number with Star Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i;
        for (int j = 1; j < i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
🔹 Prints numbers and growing stars. For example:

Copy
Edit
1
2*
3**
4***
✅ 6. Number with Diamond
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << j;
        for (int j = i - 1; j >= 1; j--) cout << j;
        cout << endl;
    }

    // lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << j;
        for (int j = i - 1; j >= 1; j--) cout << j;
        cout << endl;
    }

    return 0;
}
✅ 7. Hourglass Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // upper half
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }

    // lower half
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }

    return 0;
}
✅ 8. Inner Reducing Square Pattern
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int minDist = min(min(i, j), min(size - i - 1, size - j - 1));
            cout << n - minDist << " ";
        }
        cout << endl;
    }

    return 0;
}
🔹 For n = 4, output:

Copy
Edit
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


*/







