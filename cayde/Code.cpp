#include<bits/stdc++.h>
using namespace std;

pair<int,int> kanade(vector<int> A){
    int sum_curent = 0 ;
    int sum_max = 0;
    int l = 0,r = 0;
    for (int i = 0; i<A.size();i++){
        sum_curent +=A[i];
        if (sum_curent < 0){
            sum_curent = 0;
            l = i+1;
        }
        if(sum_max <= sum_curent){
            sum_max = sum_curent;
            r=i;
        }
    }
    return {l,r};
}

void solve(int n, string s){
    vector<int> A;
    int binary_sum = 0; 
    for (int i = 0; i<n;i++){
        if (s[i] == '1'){
            A.push_back(-1);
            binary_sum++;
        }
        else
            A.push_back(1);
    }
    if (binary_sum == n && binary_sum == 0){
        cout<<n<<endl;
        return;
    }
    auto pr = kanade(A);
    //cout<<pr.first<<" "<<pr.second<<endl;
    //cout<<binary_sum<<endl;
    for (int i = pr.first; i<=pr.second;i++){
        if (s[i] == '0')
            binary_sum++;
        else
            binary_sum--;
        cout<<s[i]<<" ";
    }
    cout<<endl;
    cout<<binary_sum<<endl;

}


int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    n = s.size();
    solve(n,s);
}