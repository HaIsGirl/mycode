#include <bits/stdc++.h>
using namespace std;
int n,a,b;
int main()
{
    cin >>a>>b>>n;
    int m=n/a,z=0,x=0;
    for (int i=0;i<=m;i++)
    {
        int tam=n-(i*a);
        x=tam/b;
        z=max(z,(i*a)+(x*b));
    }
    cout <<z;
    return 0;
}