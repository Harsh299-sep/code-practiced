#include <iostream>

using namespace std;

string movex(string s)
{
    if(s.length()==0)
    {
       return "";
    }
    char t=s[0];
    string ans=movex(s.substr(1));
    if(t=='x')
    {
        return ans+t;
    }
    else
    {
        return t+ans;
    }

}

int main()
{
    string s;
    getline(cin,s);
    s=movex(s);
    cout<<s;

    return 0;
}
