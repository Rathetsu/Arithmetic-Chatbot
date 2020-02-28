#ifndef PARSER_
#define PARSER_

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Operation.h"

using namespace std;

class Parser
{
private:
    map<string, Operation> KeyWords = 
    {
        ("add", _Add) , ("increment", _Add)
    };

public:
    Parser();
    string INPUT(string s);
    ~Parser();
};


#endif