#include "Parser.h"
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>

#define forn(i, n) for(int i = 0; i < n; i++)




int word_count = 0;
enum Ops { Add, Subtract, Difference, Multiply, Divide };
unordered_map<string, Ops> Ops_map =
{
    {"Add", Ops::Add}, {"Subtract", Ops::Subtract}, {"Difference", Ops::Difference}, {"Multiply", Ops::Multiply}, {"Divide", Ops::Divide}
};

Parser::Parser() {}

vector<double> Parser::Parameter(string s)
{
    int number_begin = 0;
    bool num = false;
    vector<double> vp;
    int n = s.length();
    vp.clear();
    forn(i, n)
    {
        if (isdigit(s[i]) && !num)
        {
            number_begin = i;
            num = true;
        }

        if (!isdigit(s[i]) && num && s[i] != '.')
        {
            vp.push_back(stod(s.substr(number_begin, i - number_begin)));
            num = false;
        }
    }
    return vp;
}

vector<string> Parser::INPUT(string s)
{
    int word_begin = 0;
    vector<string> vs;
    vs.clear();
    int n = s.length();
    size_t t = s.find_first_of("+-*/^");
    if(t!=string::npos)
    {
        vs.push_back(s.substr(t,1));
    }
    forn(i, n)
    {
        if (s[i] == ' ')
        {
            vs.push_back(s.substr(word_begin, i - word_begin));
            i++;
            word_begin = i;
            word_count++;
        }
    }

    return vs;
}

/*bool Parser::Factory(double &result)
{
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
                cout << vp[0] << " " <<  vp[1] << endl;
                return true;
            }
            case Subtract:
            {
                _Subtract op;
                result = op.calc(vp[0], vp[1]);
                return true;
            }
            case Difference:
            {
                _Difference op;
                result = op.calc(vp[0], vp[1]);
                return true;
            }
            case Multiply:
            {
                _Multiply op;
                result = op.calc(vp[0], vp[1]);
                return true;
            }
            case Divide:
            {
                _Divide op;
                double result = op.calc(vp[0], vp[1]);
                return true;
            }
            }
        }
        else
        {
            return false;
        }
    }
}*/

Operation *Parser::Factory(string OpType, double x, double y)
{
    switch (Ops_map[KeyWords[OpType]])
    {
    case Add:
    {
        return new _Add(x, y);
    }
    case Subtract:
    {
        return new _Subtract(x, y);
    }
    case Difference:
    {
        return new _Difference(x, y);
    }
    case Multiply:
    {
        return new _Multiply(x, y);
    }
    case Divide:
    {
        return new _Divide(x, y);
    }
    }
    return NULL;
}

Parser::~Parser() {}