using namespace std;
void rev(string s, int x, int y)
{
    char t;
    if(x<y)
    {
        t=s[x];
        s[x]=s[y];
        s[y]=t;
        rev(s,x+1,y-1);
       
    }
    else
    cout<<"s in rev   "<<s<<endl;
   
    
}

int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    rev(s,0,s.size()-1);

    return 0;
}
