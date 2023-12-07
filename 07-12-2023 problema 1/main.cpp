#include <iostream>

using namespace std;

int main()
{
int n,s=0,x=2;
cin>>n;
while(s<=n-x)
{
    cout<<x<<" ";
    s+=x;
    x+=2;
}
return 0;
}
