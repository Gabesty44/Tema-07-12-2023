#include <iostream>

using namespace std;

int main()
{
int a,b,x,s1=0,s2=0,d=2;
cin>>a>>b;
x=a;
while(x>1)
{
    if(x%d==0)
    {
        s1++;
        x/=d;
    }
    else
        d++;
}
x=b;
d=2;
while(x>1)
{
    if(x%d==0)
    {
        s2++;
        x/=d;
    }
    else
        d++;
}
if(s1>s2)
    cout<<a;
else
    cout<<b;
return 0;
}
