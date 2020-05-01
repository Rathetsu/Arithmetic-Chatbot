#include "Parser.h"
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>

#define forn(i, n) for(int i = 0; i < n; i++)

vector<string> vs;
vector<double> vp;

int word_count = 0;
enum Ops { Add, Subtract, Difference, Multiply, Divide };
unordered_map<string, Ops> Ops_map =
{
    {"Add", Ops::Add}, {"Subtract", Ops::Subtract}, {"Difference", Ops::Difference}, {"Multiply", Ops::Multiply}, {"Divide", Ops::Divide}
};

Parser::Parser() {}

void Parser::Parameter(string s)
{
    int n = s.length();
    int number_begin = 0;
    bool num = 0;
    forn(i, n)
    {
        if (isdigit(s[i]) && !num)
        {
            number_begin = i;
            num = true;
        }

        if (!isdigit(s[i]) && num)
        {
            vp.push_back(stod(s.substr(number_begin, i - number_begin)));
            num = false;
        }
    }
}

string Parser::INPUT(string s)
{
    getline(cin, s);
    int n = s.length();
    int word_begin = 0;  

    forn(i, n)
    {
        if( s[i] == ' ' )
        {
            vs.push_back( s.substr(word_begin, i - word_begin) );
            i++;
            word_begin = i;
            word_count++;
        }
    }

    return s;
}

bool Parser::Factory(double &result)
{
    bool success = true;
    forn(i, word_count)
    {
        if (KeyWords.find(vs[i]) != KeyWords.end())
        {
            switch (Ops_map[KeyWords[vs[i]]])
            {
            case Add:
            {
                _Add op;
                result = op.calc(vp[0], vp[1]);
                return success;
            }
            case Subtract:
            {
                _Subtract op;
                result = op.calc(vp[0], vp[1]);
                return success;
            }
            case Difference:
            {
                _Difference op;
                result = op.calc(vp[0], vp[1]);
                return success;
            }
            case Multiply:
            {
                _Multiply op;
                result = op.calc(vp[0], vp[1]);
                return success;
            }
            case Divide:
            {
                _Divide op;
                double result = op.calc(vp[0], vp[1]);
                return success;
            }
            }
        }
        else
        {
            success = false;
            return success;
        }
    }
}

Parser::~Parser() {}