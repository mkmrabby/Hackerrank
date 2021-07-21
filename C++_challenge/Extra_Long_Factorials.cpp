//
// Created by MdKhurramMonirRabby on 7/21/2021.
//

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
    vector<int> f;
    f.push_back(1);
    for(int i=2;i<=n;i++){
        int carry=0;
        for(auto it=f.begin();it!=f.end();++it){
            *it=*it*i+carry;
            carry=0;
            if(*it>9){
                carry=*it/10;
                *it=*it%10;
            }
        }
        if(carry!=0){
            if(carry>9){
                f.push_back(carry%10);
                f.push_back(carry/10);
            }
            else
                f.push_back(carry);
        }
    }
    for(auto it=f.rbegin();it!=f.rend();it++)
        cout<<*it;

}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

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
