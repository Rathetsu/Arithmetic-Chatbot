#ifndef CHATBOTTT
#define CHATBOTTT

#include <iostream>
#include <fstream>
#include "Parser.h"
#include "Operation.h"
#include <map>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

typedef vector<string> vstring;

class Chatbot
{
private:
    

public:
    Chatbot();
    void Start();
    void Load_KW();
    ~Chatbot();
};

#include "Chatbot.cpp"

#endif