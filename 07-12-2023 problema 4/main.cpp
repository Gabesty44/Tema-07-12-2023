#include <iostream>

using namespace std;

int main()
{
int n,i,a;
float Ma,k=0,s=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    s+=a;
    k++;
}
Ma=s/k;
cout<<Ma;
return 0;
}
