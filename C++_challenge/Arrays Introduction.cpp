/******************************************************************************

Tak: Print the N integers of the array in the reverse order in a single line separated by a space.

*******************************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int ip_no;
    cin >> ip_no;
    int arr[ip_no]; 
    
     
    for (int i=0; i<ip_no; i++){
        cin >> arr[i];
    }
    for (int i=ip_no; i>0; i--){
        cout << arr[i-1] << " ";
    }

    return 0;
    
}
  