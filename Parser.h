#ifndef PARSER_
#define PARSER_

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Operation.h"

using namespace std;

map<string, string> KeyWords;
enum Ops { Add, Subtract, Difference, Multiply, Divide };

class Parser
{
public:

    Parser();
    void INPUT(string s);
    ~Parser();
};

#include "Parser.cpp"
#endif