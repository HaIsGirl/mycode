#include<iostream>
using namespace std;

int main(){
    int A[1000];
    int n;
    cin>>n;
    int sum=0;
    for (int i=0;i<=n-1;i++){
        cin>>A[i];
        sum=sum+A[i];
    }
    cout<<sum<<endl;
    return 0;
}
    