/******************************************************************************

Task: A single integer denoting n.

Output Format: If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); 
otherwise, print Greater than 9 instead.

*******************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string s[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};

    cin >> n;
    
    if (n>9){
        cout << s[0]
    }
    else{
        cout << s[n]
    }

    return 0;
}

