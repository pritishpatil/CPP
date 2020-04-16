/*
PIC 10A, Final Exam
Purpose: Longest Common Phrase from User Inputed Strings
Author: Pritish Patil
Date: 03/20/2020
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <string> read_inputs()
{
    vector<string> V1;
    // while loop to read inputs
    while (true){
        string X;
        cout << "Please enter a word: " << endl;
        getline(cin, X);
        // go through read in string and break it into phrases
        for (int i = 0; i < X.size(); i++){
            if (X.substr(i,1) == " ")
            {
                X.erase(i,1);
                i--;
            }
        }
        if (X == "STOP"){    // break from loop when read STOP
            break;
        }
        // add strinng to vector of strings
        V1.push_back(X);
    }
    return V1;
}

//function to convert all phrases to lowercase
vector<string> lower_case(vector<string> v){
    for (int i = 0; i < v.size(); i++){
        string F;
        F = v[i];
        for (int j = 0; j < F.length(); j++){
            F[j] = tolower(F[j]);
        }
        v[i] = F;
    }
    return v;
}

// get all substr
vector <string> get_all_substr(string s)
{
    vector<string> all_substr;
    for(int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j <= s.size(); j++)
        {
            all_substr.push_back(s.substr(i,j));
        }
    }
    return all_substr;
}

// find longest most common phrase in vector
string find_common_phrase(vector<string> v)
{
    v = lower_case(v);
    string phrase = "";
    int most_com = 0;
    // access each word
    for (int i = 0; i < v.size(); i++)
    {
        //get all possible phrases within this word
        vector<string> phrases;
        phrases = get_all_substr(v[i]);
        // iterate through phases
        for (int j = 0; j < phrases.size(); j++) // next words
        {
            int count = 0;
            for (int k = i + 1; k < v.size(); k++)
            {
                // check if there is a match for this phrase
                if(v[k].find(phrases[j]) != string::npos)
                {
                    count++;
                }
                // check if phrase is most common
                if (count > most_com)
                {
                    phrase = phrases[j];
                    most_com = count;
                }
                // check if phrase is longer than others with same frequency
                else if (count == most_com && phrases[j].length() > phrase.length() && count != 0)
                {
                    phrase = phrases[j];
                    most_com = count;
                }
            }
        }
    }
    return phrase;
}


vector<string> read_inputs();
string find_common_phrase(vector<string> v);

int main()
{
    vector<string> v;
    string LCP;  //longest common phrase
    v = read_inputs();
    LCP = find_common_phrase(v);
    cout << LCP;
    return 0;
}

// ======================================================

// ---------- TODO  ----------

// Finish implementing the rest of code


