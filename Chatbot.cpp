#include "Chatbot.h"
#include "Parser.h"
#include "Operation.h"
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++) 
typedef vector<string> vstring;

void Chatbot::start()
{
    Parser *p = new Parser();

    while(1)
    {
        cout << ">";
        string sInput;
        p->INPUT(sInput);
    }
}

