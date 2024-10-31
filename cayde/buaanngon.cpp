#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
#define fi first
#define se second
#define ii pair<int,int>
#define vt vector
#define pb push_back
const int inf = 1e9;
void solve(int n,int m){
    vt<ii> A(n+5);
    vt<ii> prefix_sum(n+5,{0,0});
    vt<ii> right_left;
    for (int i = 1; i<=n; i++){
        cin>>A[i].fi>>A[i].se;
        prefix_sum[i].fi = prefix_sum[i-1].fi + A[i].fi;
        prefix_sum[i].se = prefix_sum[i-1].se + A[i].se;
    }
    int i = 0;
    int l = 1, r = 2;
    vt<int> rs;
    while (l<=r && r<=n){
        int sum = prefix_sum[r].fi - prefix_sum[l-1].fi;
        int sum2 = prefix_sum[r].se - prefix_sum[l-1].se;
        //cout<<"l="<<l<<", r= "<<r<<", sum= "<<sum<<endl;
        if(sum > m){
            rs.pb(sum2);
            right_left.pb({l,r});
            l++;
        }
        if(sum < m){
            r++;
        }
        if(sum == m){
            rs.pb(sum2);
            right_left.pb({l,r});
            r++;
            l++;
        }
    }
    int pos = 0;
    int Min = inf; 
    for (int i = 0; i<rs.size();i++){
        if (Min > rs[i])
            pos = i;
    } 
    auto Solve = right_left[pos];
    int Max = 0;
    for(int i = Solve.fi; i<=Solve.se;i++)
        Max = max(Max,A[i].se);
    cout<<Max<<endl;
}

int main(){
    int n,m;
    cin>>n>>m;
    solve(n,m);
}