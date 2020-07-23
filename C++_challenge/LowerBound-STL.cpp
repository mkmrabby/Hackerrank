/*
 *You are given N integers in sorted order. Also, you are given Q queries. In each query, you will be given an integer and you have to tell whether that integer is present in the array. If so, you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present.

Lower bound is a function that can be used with a sorted vector. Learn how to use lower bound to solve this problem by Clicking Here.

Input Format

The first line of the input contains the number of integers N. The next line contains N integers in sorted order. The next line contains Q, the number of queries. Then Q lines follow each containing a single integer Y.

Note that if the same number is present multiple times, you have to print the first index at which it occurs. Also, the input is such that you always have an answer for each query.

Constraints


,where  is  element in the array.



Output Format

For each query you have to print "Yes" (without the quotes) if the number is present and at which index(1-based) it is present separated by a space.

If the number is not present you have to print "No" (without the quotes) followed by the index of the next smallest number just greater than that number.

You have to output each query in a new line.

Sample Input

 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
Sample Output

 Yes 1
 No 5
 Yes 6
 Yes 8
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT
    int len;
    cin>>len;

    int* arr=new int[len];

    for(int i=0; i<len; i++){
        cin>>arr[i];
    }

    int n, i_n;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>i_n;

        int min=arr[0]-i_n;
        int pos=0;

        for(int j=0; j<len; j++){
            if(min>arr[j]-i_n || min<0){
                min=arr[j]-i_n;
                pos=j;
            }
        }

        if(min==0)
            cout<<"Yes "<<pos+1<<endl;
        else
            cout<<"No "<<pos+1<<endl;
    }
    return 0;
}
*/

