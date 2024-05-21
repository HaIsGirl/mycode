#include<iostream>
#include<vector>
using namespace std;
int truyvantong(int a, int b, vector <int> A){
    int sum = 0;
    for (int i = a; i<=b;i++){
        sum+=A[i-1];
    }
    return sum;
}
int main(){
    int n,q;
    cin>>n>>q;
    vector <int> A;
    for (int i=0;i<n;i++){
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    int a,b;
    vector <int> B;
    for (int i=0;i<q;i++){
        cin>>a>>b;
        B.push_back(truyvantong(a,b,A));
    }
    for (int i = 0; i<q;i++)
        cout<<B[i]<<endl;
}