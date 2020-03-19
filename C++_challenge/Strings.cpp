/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>!)
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << s1.size() << " " << s2.size() << endl;
    cout << s1+s2 << endl;
    swap(s1[0], s2[0]);
    cout << s1 << " " << s2 << endl;
    return 0;
}





// C++14

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << s1.size() << " " << s2.size() << endl;
    cout << s1+s2 << endl;
    cout << s2.front()+s1.substr(1,s1.size()-1) << " " << s1.front()+s2.substr(1,s2.size()-1) << endl;
    return 0;
}
