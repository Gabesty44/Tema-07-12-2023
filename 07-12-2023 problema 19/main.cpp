#include <iostream>

using namespace std;

int main()
{
int n,a,i,s,a1;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    a1=a;
    s=0;
    while(a1!=0)
    {
        s+=a1%10;
        a1/=10;
    }
    if(s%3==0)
        cout<<a<<endl;
}
return 0;
}
