#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++) 
#define endl '\n'
typedef vector<string> vstring;

int main()
{

    string sInput;
    string sResponse;

    while(1)
    {
        cout << ">";
        getline(cin, sInput);
        int nSelection = rand() % 5;
        sResponse = "";
        cout << sResponse << endl;
    }

}