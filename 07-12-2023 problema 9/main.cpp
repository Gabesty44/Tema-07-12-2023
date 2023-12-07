#include <iostream>

using namespace std;

int main()
{
int a,b,i,j;
cin>>a>>b;
for(i=a;i<=b;i++)
{
    bool prim=true;
    for(j=2;j<=i/2;j++)
        if(i%j==0)
            prim=false;
    if(prim)
        cout<<i<<" ";
}
return 0;
}
