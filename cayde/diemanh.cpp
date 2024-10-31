//https://oj.vnoi.info/problem/th_thpt_20_b
//O(n)
#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
void solve(int n, vector<int> A){
    unordered_map<int,int> mp;
    int Max = 0;
    for (int i : A){
        mp[i]++;
        Max = max(Max, mp[i]);
    }
    cout<<Max;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);
    int n;
    cin>>n;
    //int A[n];
    vector<int> A(n);
    for(int &i : A){
        cin>>i;
    }    
    solve(n,A);
    return 0;
}