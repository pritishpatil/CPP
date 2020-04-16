#include <iostream> 
#include <vector>
#include <string>

using namespace std;

//get all substr
vector<string> get_all_substr(string s)
{
    vector<string> all_substr;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = i + 1; j <= s.size(); j++)
        {
            all_substr.push_back(s.substr(i,j));
        }
    }
    return all_substr; 
}


//find longest most common phrase in vector
string lmcp(vector<string> v)
{
    string phrase = "";
    int most_com = 0;
    //access each word
    for(int i = 0; i < v.size(); i++)
    {
        //get all possible phrases within this word
        vector<string> phrases;
        phrases = get_all_substr(v[i]);
        //iterate through phrases
        for(int j = 0; j < phrases.size(); j++) //next words
        {             
            int count = 0;   
            for(int k = i+1; k < v.size(); k++)
            {
                //check if there is a match for this phrase
                if(v[k].find(phrases[j]) != string::npos) 
                {
                    count++;
                }
                    
                //check if phrase is most common
                if(count > most_com)
                {
                    phrase = phrases[j];
                    most_com = count;
                }
                //check if phrase is longer than others with same frequency
                else if(count == most_com && phrases[j].length() > phrase.length() && count != 0)
                {
                    phrase = phrases[j];
                    most_com = count;
                }
            }   
        }  


    }
    return phrase;
}

//main routine
int main()
{
    vector<string> a;
    a.push_back("hello");
    a.push_back("helsinki");
    a.push_back("shell");

    vector<string> b;
    b.push_back("substitute");
    b.push_back("subtraction");
    b.push_back("subway");

    vector<string> c;
    c.push_back("chips");
    c.push_back("chipmunk");
    c.push_back("pic");

    vector<string> d;
    d.push_back("abc");
    d.push_back("def");
 
    string s;
    s = lmcp(a);
    cout << "longest most common phrase: " << s << endl; //should be hel
    s = lmcp(b);
    cout << "longest most common phrase: " << s << endl; //should be sub
    s = lmcp(c);
    cout << "longest most common phrase: " << s << endl; //should be p or i or c
    s = lmcp(d);
    cout << "longest most common phrase: " << s << endl; //should be empty
    return 0;
}