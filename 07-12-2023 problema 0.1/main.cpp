#include <iostream>

using namespace std;

int main()
{
int n,s=0,ogl=0,m;
cin>>n;
m=n;
while(n!=0)
{
    s+=n%10;
    n/=10;
}
while(s!=0)
{
    ogl=10*ogl+s%10;
    s/=10;
}
cout<<"Oglinditul sumei cifrelor numarului "<<m<<" este "<<ogl;
return 0;
}
