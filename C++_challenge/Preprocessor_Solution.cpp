/*
 Preprocessor directives are lines included in the code preceded by a hash sign (#). These lines are directives for the preprocessor. The preprocessor examines the code before actual compilation of code begins and resolves all these directives before any code is actually generated by regular statements.

#define INF 10000000
if( val == INF) {
//Do something
}
After the preprocessor has replaced the directives, the code will be
if( val == 10000000) { //Here INF is replaced by the value with which it's defined.
//Do something
}
You can also define function macros which have parameters.

#define add(a, b) a + b
int x = add(a, b);

The second statement after the preprocessor has replaced the directives will be:
int x = a + b;
To know more about preprocessor directives, you can go to this link

You're spending your afternoon at a local school, teaching kids how to code. You give them a simple task: find the difference between the maximum and minimum values in an array of integers.

After a few hours, they came up with some promising source code. Unfortunately, it doesn't compile! Since you don't want to discourage them, you decide to make their code work without modifying it by adding preprocessor macros.

Review the locked stub code in your editor and add the preprocessor macros necessary to make the code work.

Input Format

The first line contains an integer, , denoting the size of the array.
The second line contains  space-separated integers, , describing the elements in the array.

Constraints

Output Format

You are not responsible for printing any output to stdout. Once the necessary preprocessor macros are written, the locked code in your editor will print a line that says , where  is the difference between the maximum and minimum values in the array.

Sample Input

5
32 332 -23 -154 65
Sample Output

Result = 486
Explanation



 */

/* Enter your macros here */
#define FUNCTION(operan, operat)
#define minimum(a,b) {if (a > b) a=b;}
#define maximum(a,b) {if (a < b) a=b;}
#define toStr(x) #x
//#define FUNCTION(name, op) void name(int& a, int b) {if (b op a) a=b;}
#define io(v) cin>>v
#define INF 100000000
#define foreach(v, i) for(int i=0; i<v.size();i++)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
    int n; cin >> n;
    vector<int> v(n);
    foreach(v, i) {
        io(v)[i];
    }
    int mn = INF;
    int mx = -INF;
    foreach(v, i) {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) <<' '<< ans;
    return 0;

}
