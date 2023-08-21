#include<iostream>
using namespace std;

long long giaithua(int n){
    if (n==1)
        return 1;
    return n*giaithua(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<giaithua(n)<<endl;
    return 0;
}
