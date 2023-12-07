#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int a,b,i,x,ogl,k=0;
cin>>a>>b;
for(i=sqrt(a);i<=sqrt(b);i++)
{
    x=i*i;
    ogl=0;
    while(x!=0)
    {
        ogl=10*ogl+x%10;
        x/=10;
    }
    if(sqrt(ogl)==floor(sqrt(ogl)))
        k++;
}
cout<<k;
return 0;
}
