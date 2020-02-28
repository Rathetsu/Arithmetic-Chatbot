#include "Chatbot.h"
#include "Parser.h"
#include "Operation"
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++) 
typedef vector<string> vstring;

void Chatbot::start()
{
        while(1)
    {
        cout << ">";
        string sInput;
        Parser::INPUT(sInput);
    }
}

