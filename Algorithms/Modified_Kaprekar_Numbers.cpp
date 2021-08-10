//
// Created by MdKhurramMonirRabby on 8/10/2021.
//

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q) {
    int r, l, len, count=0;
    long int sq;

    // vector <int> temp;
    for(int i = p; i <= q; i ++){
        sq = (long int)i * i;
        len = (int)log10(i)+1;
        r = sq%(int)pow(10, len);
        l = sq/(int)pow(10, len);
        if(r+l == i){
            cout<<i<<" ";
            count++;
        }
    }
    if (count==0){
        cout<<"INVALID RANGE";
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}
