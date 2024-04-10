#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,k;
     cin>>n>>k;
     vector<int> w(n), v(n);
     int dp[n+1][k+1] = {};
     for (int i = 1; i<=n;i++)
          cin>>w[i];
     for (int i = 1; i<=n;i++)
          cin>>v[i];
     for (int i = 1; i<=n; i++){
          for (int j = 1; j<=k;j++){
               dp[i][j] = dp[i-1][j];
               if (w[i] <= j){
                    dp[i][j] = max(dp[i][j], dp[i-1][j - w[i]] + v[i]); 
               }
          }
     }
     cout<<dp[n][k]<<endl;
}