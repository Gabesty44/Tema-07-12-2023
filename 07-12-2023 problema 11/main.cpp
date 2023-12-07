#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int p=0,n,i;
cin>>n;
for(i=1;i<=100;i++)
{
    if(pow(2,i)<=n)
        p++;
}
cout<<p;
return 0;
}
