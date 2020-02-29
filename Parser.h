#ifndef PARSER_
#define PARSER_

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Operation.h"

using namespace std;

enum Ops { Add, Subtract, Difference, Multiply, Divide };

map<string, Ops> KeyWords = 
{
    ("add", Add) , ("increment", Add)
};


class Parser
{
public:

    Parser();
    string INPUT(string s);
    ~Parser();
};


#endif