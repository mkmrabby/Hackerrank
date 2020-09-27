/*
You are given four integers: , , , . You will use them in order to create the sequence  with the following pseudo-code.

a[0] = S (modulo 2^31)
for i = 1 to N-1
    a[i] = a[i-1]*P+Q (modulo 2^31)
Your task is to calculate the number of distinct integers in the sequence .

Input Format

Four space separated integers on a single line, , , , and  respectively.

Output Format

A single integer that denotes the number of distinct integers in the sequence .

Constraints




Sample Input

3 1 1 1
Sample Output

3
Explanation


Hence, there are  different integers in the sequence.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned N, S, P, Q;

    if (!(cin>>N>>S>>P>>Q))
        throw;

    unsigned constexpr M=0x7fffffff;
    unsigned i=N;
    unsigned a=S;
    unsigned b=(S*P+Q) & M;

    while(--i && a!=b){
        a=(a*P+Q) & M;
        b=(b*P+Q);
        b=(b*P+Q) & M;
    }
    i=N-i;

    cout<<i<<'\n';

    return 0;
}
