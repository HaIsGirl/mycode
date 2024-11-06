#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> mp;
    int n;
    cin>>n;
    int A[n+5];
    for (int i = 1; i<=n;i++){
        cin>>A[i];
    }
    int rs = 0;
    for (int i = 1; i<=n;i++){
        if (mp.find(A[i]) != mp.end()){
            rs+=mp[A[i]];
        }
        mp[A[i]]++;
    }
    cout<<rs<<endl;
}