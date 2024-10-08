#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj[1001];
int u,v;
int parent[1001] = {};
void adj_list(){
   cin>>u>>v;
   for (int i = 1; i<=v;i++){
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
   } 
}
const int inf = 1e9;
void dijkstra(int s,int t){
    memset(parent,0,sizeof(parent));
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> d(u+1,inf);
    d[s] = 0;
    pq.push({s,0});
    while(!pq.empty()){
        int n,m;
        pair<int,int> top = pq.top();
        n = top.first;
        m = top.second;
        pq.pop();
        if(m > d[n])
            continue;
        for (auto it:adj[n]){
            int v = it.first;
            int w = it.second;
            d[v] = min(d[v], d[n] + w);
            pq.push({v,d[v]});
            parent[v] = n;
        }
    }
    bool check = true;
    if (d[t] == inf){
        cout<<"Khong co duong di"<<endl;
        check = false;
    }
    vector<int> path;
    path.push_back(t);
    if(check == true){
        while (t != s){
            t = parent[t];
            path.push_back(t);
        }
        reverse(path.begin(), path.end());
        for (auto i : path){
            cout<<i<< " ";
        }
        cout<<endl;
        cout<<d[path[path.size()-1]]<<endl;
    }   
}

int main(){
    freopen("DIJKSTRA.INP","r", stdin);
    freopen("DIJKSTRA.out","w",stdout);
    adj_list();
    int s,t;
    cin>>s>>t;
    dijkstra(s,t);
}