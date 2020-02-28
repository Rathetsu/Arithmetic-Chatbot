#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;


#define forn(i, n) for(int i = 0; i < n; i++) 
#define endl '\n'
typedef vector<string> vstring;

const int MAX_RESP = 3;

vstring find_match(string input);
void copy(char *array[], vstring &v);


typedef struct {
    char *input;
    char *responses[MAX_RESP];
}record;

record KnowledgeBase[] = {
    {"What is your name", 
    {"MY NAME IS CHATTERBOT2.",
     "You can call me daddy.",
     "Why do you want to know my name?"}
    },

    {"Hi", 
    {"Hi there!",
     "How are you?",
     "Hi!"}
    },
    
    {"How are you",
    {"I'm doing fine.",
    "I'm doing well and you?"}
    },

    {"WHO ARE YOU",
    {"I am an AI program.",
     "I think that you know who I am",
     "Why are you asking?"}
    },

    {"ARE you intelligent",
    {"Yes, of course.",
     "What do you think?",
     "ACctually, I am very intelligent."}
    },

    {"Are you real",
    {"Does that question really matter to you?",
     "What do you mean by that?",
     "I'm as real as I can be"}
    }
};

size_t nKnowledgeBaseSize = sizeof(KnowledgeBase)/sizeof(KnowledgeBase[0]);

int main()
{
    srand((unsigned) time(NULL));

    string sInput = "";
    string sResponse = "";

    cout << nKnowledgeBaseSize << endl;
    
    while(1)
    {
        cout << ">";
        getline(cin, sInput);
        vstring responses = find_match(sInput);
        if(sInput == "BYE")
        {
            cout << "IT WAS NICE TALKING TO YOU, SEE YOU NEXT TIME!" << endl;  
            break;
        } 
        else if(responses.size() == 0)
        {
            cout << "I'M NOT SURE IF I  UNDERSTAND WHAT YOU  ARE TALKING ABOUT." 
                      << endl;
        }
        else
        {
            int nSelection = rand()  % MAX_RESP;
            sResponse =   responses[nSelection]; cout << sResponse << endl; 
        } 
    } 

}
    
// make a  search for the  user's input 
// inside the database of the program 
vstring find_match(string  input)
{ 
    vstring result;
    for(int i = 0; i < nKnowledgeBaseSize;  ++i)
    {  
        if(string(KnowledgeBase[i].input) == input)
        { 
            copy(KnowledgeBase[i].responses, result); 
            return result;
        } 
    } 
    return result; 
}

void copy(char  *array[], vstring &v)
{ 
    for(int i = 0;  i < MAX_RESP; ++i)
    {
        v.push_back(array[i]);
    }
}