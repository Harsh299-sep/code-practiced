#include <iostream>

using namespace std;

int first(int a[], int n , int x) //recursive function to get first occurence of element in array
{
    int t=0;
    if(a[0]==x)
    {
        return 0;
    }
    else{
        t=1+first(a+1 ,n-1,x);
    }
    return t;
    
}

int
main ()
{
 int a[]={2,5,6,9,8,7,3};
 cout<<first(a,7,9);
   
  return 0;
}
