#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'camelcase' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int camelcase(string s) {
    int result=1;
    
    for(int i=0;i<s.size();++i){
        if((int) s[i]>=65 && (int) s[i]<=90){
            result++;
        }
    }
    
    return result;    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
