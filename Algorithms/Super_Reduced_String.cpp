#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
       {
            s.erase(i,2);
            i=-1;
       }
    }
    if(s[0]!='\0')
        return s;
    else
        return "Empty String";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
