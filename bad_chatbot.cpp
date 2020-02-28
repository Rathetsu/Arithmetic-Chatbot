#include <iostream>
#include <string>
#include <ctime>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; i++) 
#define endl '\n'

int main()
{
    string Response[] =
    {
        "I hear you!",
        "SO, YOU ARE TALKING TO ME.",
        "Continue, I'm listening.",
        "Very interesting conversation.",
        "Tell me more..."
    };

    srand((unsigned) time(NULL));

    string sInput = "";
    string sResponse = "";

    while(1)
    {
        cout << ">";
        getline(cin, sInput);
        int nSelection = rand() % 5;
        sResponse = Response[nSelection];
        cout << sResponse << endl;
    }

}