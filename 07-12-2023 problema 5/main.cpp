#include <iostream>

using namespace std;

int main()
{
int n,a,i,max=-999999;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    if(a<=0 && a>=max)
        max=a;
}
cout<<max;
return 0;
}
