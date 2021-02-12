#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    int hh=stoi(s.substr(0,2));
    hh%=12;
    if(s.at(8)=='P'||s.at(8)=='p'){
        hh+=12;
    }
    string htos=to_string(hh);
    if(htos.size()==1){
        htos="0"+htos;
    }
    s.replace(0,2,htos);
    return s.substr(0,8);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
