#include "Parser.h"
#include "Operation.h"
#include <algorithm>
#include <string>
#include <map>

#define forn(i, n) for(int i = 0; i < n; i++) 

Parser::Parser() {}

void Parser::INPUT(string s)
{
    getline(cin, s);
    int n = s.length();

    forn(i, n)
    {
        if( KeyWords.find( s.substr(i, 3) ) != KeyWords.end() )
        {

        }
    }
}