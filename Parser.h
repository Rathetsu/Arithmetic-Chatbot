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
    string INPUT(string s);
    bool Factory(double &x);
    void Parameter(string s);
    ~Parser();
};

#include "Parser.cpp"
#endif