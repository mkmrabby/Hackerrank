#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'alternate' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int alternate(string s) {
set <char>m ( begin(s) , end(s));
vector<char> ss( m.begin(), m.end() );
int maxi=0;
for(int i=0;i<ss.size()-1;i++){
    for(int j=i+1;j<ss.size();j++){
        vector<char>checker;
        int flag=0;
        //to put the alternate elements in a temporary vector
        for(int k=0;k<s.size();k++){
            if(s[k]==ss[i]||s[k]==ss[j]){
                checker.push_back(s[k]);
            }
        }
        //to check alternate
        for(int l=0;l<checker.size()-1;l++){
            if(checker[l]==checker[l+1]){
                flag++;
            }
        }
        if(flag==0){
            if(maxi<checker.size()){
                maxi=checker.size();
            }
        }
    }
}
    return maxi;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

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
