#include "Chatbot.h"
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++) 
#define _KW "KeyWords.txt"

Chatbot::Chatbot() {}

void Chatbot::Start()
{
    Parser *p = new Parser();

    while(1)
    {
        cout << ">";
        string sInput;
        p->INPUT(sInput);
    }
}

void Chatbot::Load_KW()
{
    string s;   string r;   string k;  bool colon = 0;   bool dot = 0;

    ifstream in(_KW);

    while(in >> s)
    {
        if ( s == "." ) { colon = 0; dot = 1;}
        if ( s == ":" ) { colon = 1; }

        if(!colon && !dot)
        {
            r = s;
        }
        else
        {
            if (!dot)
            {
                k = s;
            }
            else
            {
                KeyWords[r] = k;
                cout << KeyWords[r] << endl;
                dot = 0;
            }
        }
    }

    in.close();
}

Chatbot::~Chatbot() {}

