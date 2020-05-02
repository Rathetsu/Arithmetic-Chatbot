#include "Chatbot.h"
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define _KW "KeyWords.txt"

double result = 0;

Chatbot::Chatbot() {}

void Chatbot::Start()
{
    Parser p;

    while (1)
    {
        cout << ">";
        string sInput;
        getline(cin, sInput);
        vector<string> vs = p.INPUT(sInput);
        vector<double> vp = p.Parameter(sInput);

        /*forn(i,vs.size())
        {
            
        }*/

        Operation *OP = p.Factory(vs[0], vp[0], vp[1]);

        if (OP == NULL)
        {
            cout << "I am sorry, I don't understand. Could you ask me something else?" << endl;
        }
        else
        {
            result = OP->calc();
            cout << "The result is :  " << result << endl;
        }
    }
}

void Chatbot::Load_KW()
{
    string s;
    string r;
    string k;
    bool colon = 0;
    bool dot = 0;

    ifstream in(_KW);

    while (in >> s)
    {
        if (s == ".")
        {
            colon = 0;
            dot = 1;
        }
        if (s == ":")
        {
            colon = 1;
        }

        if (!colon && !dot)
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
                dot = 0;
            }
        }
    }

    in.close();
}

Chatbot::~Chatbot() {}
