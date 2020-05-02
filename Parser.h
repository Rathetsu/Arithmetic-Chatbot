#ifndef PARSER_
#define PARSER_

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Operation.h"

using namespace std;

map<string, string> KeyWords; //the keyword map being here guarantees that we're able to use it in the Chatbot driver.

class Parser
{
public:
    Parser();

    vector<string> INPUT(string s);
    vector<double> Parameter(string s);
    Operation *Factory(string OpType, double x, double y);

    ~Parser();
};

#include "Parser.cpp"
#endif