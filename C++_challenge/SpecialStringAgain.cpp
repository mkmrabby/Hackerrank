/*
A string is said to be a special string if either of two conditions is met:

All of the characters are the same, e.g. aaa.
All characters except the middle one are the same, e.g. aadaa.
A special substring is any substring of a string which meets one of those criteria. Given a string, determine how many special substrings can be formed from it.

For example, given the string , we have the following special substrings: .

Function Description

Complete the substrCount function in the editor below. It should return an integer representing the number of special substrings that can be formed from the given string.

substrCount has the following parameter(s):

n: an integer, the length of string s
s: a string
Input Format

The first line contains an integer, , the length of .
The second line contains the string .

Constraints


Each character of the string is a lowercase alphabet, .

Output Format

Print a single line containing the count of total special substrings.

Sample Input 0

5
asasd
Sample Output 0

7
Explanation 0

The special palindromic substrings of  are

Sample Input 1

7
abcbaba
Sample Output 1

10
Explanation 1

The special palindromic substrings of  are

Sample Input 2

4
aaaa
Sample Output 2

10
Explanation 2

The special palindromic substrings of  are
 */

#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s) {
    long count = 0;

    long i = 0;
    while (i < s.size()) {
        char match = s[i++];
        long length = 1;
        while (i < s.size() && s[i] == match) {
            ++length;
            ++i;
        }

        count += (length * (length + 1)) / 2;
    }

    for (i = 1; i < s.size(); ++i) {
        if (s[i-1] == s[i]) {
            continue;
        }

        char match = s[i - 1];
        long left = i - 1;
        long right = i + 1;
        while (left >= 0 && right < s.size() && s[left] == match && s[right] == match) {
            ++count;
            --left;
            ++right;
        }
    }
    return count;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}