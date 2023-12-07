#include <iostream>

using namespace std;

int main()
{
int n,p=1,x,max=0;
cin>>n;
while(p<=n)
{
    x=n/(p*10)*p+n%p;
    if(x>max)
        max=x;
    p*=10;
}
cout<<max;
return 0;
}
