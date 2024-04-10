#include<iostream>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int x=1;
    int sum = 1;
    for (int i = 1; i<n; i++){
        x = (x*q) % 2023;
        sum = (sum + x) % 2023;
    }

    cout<<sum<<endl;
}