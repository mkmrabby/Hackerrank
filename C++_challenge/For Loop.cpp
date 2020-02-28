/******************************************************************************

Task: A single integer denoting n.

Input: You will be given two positive integers, a and b (a<=b), separated by a newline.

Output Format: For each integer n in the interval [a,b]:

- If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
- Else if n>9 and it is an even number, then print "even".
- Else if n>9 and it is an odd number, then print "odd".

*******************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;

    string s[]={"odd","one","two","three","four","five","six","seven","eight","nine","even"};
    
    for (int i=a; i<=b; i++){
        cout << ((i<=9)?s[i]:((i%2==0)?s[10]:s[0])) << endl;
    }

    return 0;

}


