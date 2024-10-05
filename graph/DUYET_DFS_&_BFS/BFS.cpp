#include<queue>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int u,v;
vector<int> adj[1001];
bool visited[1001] = {false};

void adj_list(){
    int a,b;
    for (int i = 1; i<=v; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a); //Comment dong nay neu do thi co huong
    }
}

void bfs(int u){
    queue<int> queue;
    queue.push(u);
    visited[u] = true;
    while(!queue.empty()){
        int n = queue.front();
        queue.pop();
        cout<<n<<" ";
        for (auto x : adj[n]){
            if (!visited[x]){
                queue.push(x);
                visited[x] = true;
            }
        }
    }
}

int main(){
    cin>>u>>v;
    adj_list();
    bfs(1);
    return 0;
}