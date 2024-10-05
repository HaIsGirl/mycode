#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
vector<int> adj[1001];
bool visited[1001] = {false};

int u,v;
//10 8
// 2 5
// 1 4
// 2 1
// 4 5
// 6 7
// 6 9
// 3 5
// 10 8
//https://csacademy.com/app/graph_editor/
//output: 3


// 5 10
// 1 2
// 2 3
// 3 4
// 4 5
// 5 1
// 5 3
// 2 5
// 2 4
// 4 1
// 1 3

// output: 1

void adj_list(){
    int a,b;
    for (int i = 0; i<v; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
}

void dfs(int u){
    cout<<u<<" ";
    visited[u] = true;
    for (auto x : adj[u]){
        if (!visited[x]){
            dfs(x);
        }
    }
}

void Connected_component(){
    memset(visited,false, sizeof(visited));
    int ans = 0;
    for (auto i = 1; i<=u; i++){
        if(!visited[i]){
            ans++;
            cout<<"Thanh phan lien thong thu "<<ans<<": ";
            dfs(i);
            cout<<endl;
        }
    }
    cout<<"Do thi nay co "<<ans<<" lien thong"<<endl;
    if (ans == 1)
        cout<<"Do thi nay lien thong"<<endl;
    else 
        cout<<"Do thi nay khong lien thong"<<endl;
}
int main(){
    cin>>u>>v;
    adj_list();
    Connected_component(); 
} 