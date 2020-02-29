#include "Parser.h"
#include "Operation.h"
#include <algorithm>
#include <string>
#include <map>

#define forn(i, n) for(int i = 0; i < n; i++)
typedef vector<string> vstring;

vstring vs;
enum Ops { Add, Subtract, Difference, Multiply, Divide };
map<string, Ops> Ops_map =
{
    {"Add", Add}, {"Subtract", Subtract}, {"Difference", Difference}, {"Multiply", Multiply}, {"Divide", Divide}
};

Parser::Parser() {}

string Parser::INPUT(string s)
{
    getline(cin, s);
    int n = s.length();
    int word_begin = 0;  int word_count = 0;

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

void Parser::Parameter(string s)
{
    int n = s.length();
    forn(i, n)
    {
        if( isdigit(s[i]) )
        {
            
        }
    }
}

/*void Parser::Factory()
{
        forn(i, word_count)
    {
        if( KeyWords.find( vs[i] ) != KeyWords.end() )
        {
            switch(Ops_map[KeyWords[vs[i]]])
            {
                case Add:
                    
                case Subtract:

                case Difference:
                
                case Multiply:

                case Divide: 

            }
        }
    }
}*/

Parser::~Parser() {}