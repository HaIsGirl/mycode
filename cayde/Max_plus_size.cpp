//https://codeforces.com/problemset/problem/2019/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    int ml = 0;
    int mc = 0;
    int nc = 0;
    int nl = 0;
    for (int i = 0; i<n;i++){
        cin>>A[i];
        if(i % 2 == 0){
            mc = max(mc, A[i]);
            nc++;
        }
        else{
            ml = max(ml, A[i]);
            nl++;
        }
    }
    cout<<max(mc + nc, ml + nl)<<endl;
}