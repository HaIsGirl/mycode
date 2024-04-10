#include<bits/stdc++.h>
using namespace std;

int m;
int F(int i){
    if (i == 1 || i == 0)
        return 1;
    else if (i==2)
        return 2;
    return F(i-1)%m + F(i-2)%m + F(i-3)%m;
}
int main(){
    freopen("LOCO.INP", "r", stdin);
    int n;
    cin>>n>>m;
    cout<<F(n)<<endl;
}