#include<iostream>
#include<vector>
#include<cstring>
#include<utility>
#include<algorithm>
using namespace std;
int u,v;
vector<int> adj[1001];
bool visited[1001] = {false};
int parent[1001] = {};


void adj_list(){
    int a,b;
    for (int i = 1; i<=v; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        }
}

void dfs(int u){
    visited[u] = true;
    for (int x : adj[u]){
        if (!visited[x]){   
            parent[x] = u;
            dfs(x);
        }
    }
}

void Path(int s, int t){
    memset(visited, false,sizeof(visited));
    memset(parent, 0, sizeof(parent));
    dfs(s);
    if (!visited[t])
        cout<<"Khong co duong di tu "<<s<<" den "<<t<<endl;
    else{
        vector<int> path;
        while (t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(),path.end());
        for (auto i:path)
            cout<<i<<" ";
    }
}

int main(){
    int s,t;
    cout<<"Nhap dinh va canh: "<<endl;
    cin>>u>>v;
    cout<<"Nhap s va t "<<endl;
    cin>>s>>t;
    adj_list();
    //dfs(1);
    Path(s,t);
    for (int i = 1; i<=u; i++)
        cout<<i<<" "<<parent[i]<<endl;
    }