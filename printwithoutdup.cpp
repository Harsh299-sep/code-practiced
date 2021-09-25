#include <iostream>

using namespace std;
void dup(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]==s[1])
    {
        dup(s.substr(1));
    }
    else
    {
        cout<<s[0];
        dup(s.substr(1));
    }
   
    
}

int main()
{
    string s;
    getline(cin,s);
    dup(s);

    return 0;
}
