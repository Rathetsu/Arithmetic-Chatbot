#include <iostream>
#include <string>
#include <vector>
#include "Chatbot.h"

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++) 
#define endl '\n'

int main()
{
    Chatbot CB;
    CB.Load_KW();
    CB.Start();
}