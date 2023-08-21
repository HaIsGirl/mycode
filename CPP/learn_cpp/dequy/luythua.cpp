#include<bits/stdc++.h>
using namespace std;

long long luythua(int n,int p){
    if (p==1)
        return n;
    return n*luythua(n,p-1);
}

int main(){
    cout<<luythua(5,2)<<endl;
    return 0;
}