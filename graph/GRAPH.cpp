#include<bits/stdc++.h>
using namespace std;
int u,v;
vector<pair<int,int>> adj[1001];
int parent[1001] = {};
void input(){
    cin>>u>>v;
    for(int i = 1; i<=v; i++){
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
    }    
}
const int inf = 1e9;
void dijkstra(int s, int t){
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> Q;
    vector<int> d(u+1,inf);
    d[s] = 0;
    Q.push({s,0});
    while(!Q.empty()){
        pair<int,int> top;
        top = Q.top();
        Q.pop();
        int dt = top.first;
        int ct = top.second;
        if(ct > d[dt])
            continue;
        for(pair<int,int> it : adj[dt]){
            int a,w;
            a = it.first;
            w = it.second;
            d[a] = min(d[a],d[dt] + w);
            Q.push({a,d[a]});

        }
    }
    cout<<d[t]<<endl;
}
int main(){
    freopen("DIJKSTRA.INP","r", stdin);
    freopen("DIJKSTRA.out","w",stdout);
    input();
    int s,t;
    cin>>s>>t;
    dijkstra(s,t);   
}