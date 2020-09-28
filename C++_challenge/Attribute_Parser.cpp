/*
We have defined our own markup language HRML. In HRML, each element consists of a starting and ending tag, and there are attributes associated with each tag. Only starting tags can have attributes. We can call an attribute by referencing the tag, followed by a tilde, '~' and the name of the attribute. The tags may also be nested.

The opening tags follow the format:

<tag-name attribute1-name = "value1" attribute2-name = "value2" ...>

The closing tags follow the format:

</tag-name>

The attributes are referenced as:

tag1~value
tag1.tag2~name
Given the source code in HRML format consisting of  lines, answer  queries. For each query, print the value of the attribute specified. Print "Not Found!" if the attribute does not exist.

Example

HRML listing
<tag1 value = "value">
<tag2 name = "name">
<tag3 another="another" final="final">
</tag3>
</tag2>
</tag1>

Queries
tag1~value
tag1.tag2.tag3~name
tag1.tag2~value
Here, tag2 is nested within tag1, so attributes of tag2 are accessed as tag1.tag2~<attribute>. Results of the queries are:

Query                 Value
tag1~value            "value"
tag1.tag2.tag3~name   "Not Found!"
tag1.tag2.tag3~final  "final"
Input Format

The first line consists of two space separated integers,  and .  specifies the number of lines in the HRML source program.  specifies the number of queries.

The following  lines consist of either an opening tag with zero or more attributes or a closing tag. There is a space after the tag-name, attribute-name, '=' and value.There is no space after the last value. If there are no attributes there is no space after tag name.

 queries follow. Each query consists of string that references an attribute in the source program.More formally, each query is of the form ~ where  and  are valid tags in the input.

Constraints

Each line in the source program contains, at most,  characters.
Every reference to the attributes in the  queries contains at most  characters.
All tag names are unique and the HRML source program is logically correct, i.e. valid nesting.
A tag can may have no attributes.
Output Format

Print the value of the attribute for each query. Print "Not Found!" without quotes if the attribute does not exist.

Sample Input

4 3
<tag1 value = "HelloWorld">
<tag2 name = "Name1">
</tag2>
</tag1>
tag1.tag2~name
tag1~name
tag1~value
Sample Output

Name1
Not Found!
HelloWorld
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct attribute{
    string name;
    string value;
};
struct tag{
    string name;
    vector<attribute> attributes;
};
vector<string> vtlines;
vector<string> vqlines;
void inputs(){
    int N, Q;
    string lines;
    cin>>N>>Q;
    while (N>=0){
        getline(cin, lines);
        vtlines.push_back(lines);
        N--;
    }
    while (Q>0){
        getline(cin, lines);
        vqlines.push_back(lines);
        Q--;
    }
}
string prep_wtemp(string wtemp){
    return wtemp.substr(0,wtemp.length()-1);
}
string prep_tagname(vector<string> tagNames){
    string temp = "";
    for (string tagName:tagNames){
        if (temp !=""){
            temp += ".";
        }
        temp += tagName;
    }
    return temp;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    inputs();
    vector <tag> vtags;
    vector <attribute> vattributes;
    vector <string> tagNames;
    tag ptag;
    attribute pattribute;
    string wtemp;
    string curr_tag;

    bool tag_found = false;
    bool tag_name_is_parsed = false;
    bool attribute_name_is_parsing = false;
    bool attribute_value_is_parsing = false;
    bool foot_is_open = false;
    //parse
    for(string lines:vtlines){
        wtemp = "";
        for(char c:lines){
            wtemp += c;
            if(c=='<'){
                tag_name_is_parsed = false;
                wtemp = "";
            }
            if(c==' '){
                if (attribute_name_is_parsing == true && wtemp !=" "){
                    pattribute.name = prep_wtemp(wtemp);
                    attribute_name_is_parsing = false;
                }
                if(tag_name_is_parsed == false){
                    curr_tag = prep_wtemp(wtemp);
                    tagNames.push_back(curr_tag);
                    curr_tag = prep_tagname(tagNames);
                    ptag.name = curr_tag;
                    tag_name_is_parsed = true;
                    attribute_name_is_parsing = true;
                }
                wtemp = "";
            }
            if(c=='='){
                wtemp = "";
            }
            if(c=='\"'){
                if(attribute_value_is_parsing == true){
                    pattribute.value = prep_wtemp(wtemp);
                    ptag.attributes.push_back(pattribute);
                    attribute_value_is_parsing = false;
                    attribute_name_is_parsing = true;
                }
                if(attribute_name_is_parsing == false){
                    attribute_value_is_parsing = true;
                }
                wtemp = "";
            }
            if(c=='/'){
                foot_is_open = true;
                tagNames.pop_back();
                wtemp = "";
            }
            if(c=='>'){
                if(tag_name_is_parsed==false && foot_is_open==false){
                    curr_tag = prep_wtemp(wtemp);
                    tagNames.push_back(curr_tag);
                    curr_tag = prep_tagname(tagNames);
                    ptag.name = curr_tag;
                }
                if(foot_is_open == false){
                    vtags.push_back(ptag);
                }
                tag_name_is_parsed = false;
                attribute_name_is_parsing = false;
                attribute_value_is_parsing = false;
                foot_is_open = false;
                ptag.name.clear();
                ptag.attributes.clear();
                wtemp = "";
            }
        }
    }
//query
    for(string lines:vqlines){
        curr_tag = lines.substr(0,lines.find('~'));
        wtemp = lines.substr(lines.find('~')+1, lines.length());
        tag_found = false;
        for (tag i:vtags){
            if (i.name==curr_tag){
                for(attribute att:i.attributes){
                    if (att.name == wtemp){
                        cout<<att.value<<endl;
                        tag_found = true;
                        break;
                    }
                }
                break;
            }
        }
        if(tag_found == false){
            cout<<"Not Found!"<<endl;
        }
    }
    return 0;
}

