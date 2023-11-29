#include<iostream>
#include<cmath>
using namespace std;

bool sochinhphuong(int n){
    int cbh = trunc(sqrt(n));
    if (cbh * cbh == n)
        return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<sochinhphuong(n)<<endl;
    return 0;
}
