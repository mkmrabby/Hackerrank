/******************************************************************************

Task:
Read  numbers from stdin and print their sum to stdout.Some C++ data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
Input consists of the following space-separated values: int, long, char, float, and double, respectively

Output Format:
Print each element on a new line in the same order it was received as input. 
Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
*******************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i;
    long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;
    
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout.precision(3);
    cout<< fixed << f << endl;
    cout.precision(9);
    cout<< fixed << d << endl;

    return 0;
}

