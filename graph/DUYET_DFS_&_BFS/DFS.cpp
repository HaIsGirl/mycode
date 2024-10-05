//Danh sach ke DFS 
#include<iostream>
#include<vector>
using namespace std;
vector<int> adj[1001];
bool visited[1001] = {false};
int v,u;
void danh_sach_ke(int v){
    for (int i = 1; i<=v;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}

void DFS(int u){
    cout<<u<<" ";
    visited[u] = true;
    for (auto x : adj[u])
        if (!visited[x])
            DFS(x);
}
int main(){
    cin>>u>>v;
    danh_sach_ke(v);
    DFS(2);
}