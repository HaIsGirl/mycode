#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;


int main(){
    map<int, int> mp;
    int n;
    cin>>n;
    for (int i = 0; i<n; i++){
        int A;
        cin>>A;
        mp[A]++;
    }
    for (auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}