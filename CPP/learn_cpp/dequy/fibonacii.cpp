#include<bits/stdc++.h>
using namespace std;

long long fibonacii(int n){
    if (n<=2 && n>0)
        return 1;
    return fibonacii(n-2) + fibonacii(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacii(n)<<endl;
    return 0;
}