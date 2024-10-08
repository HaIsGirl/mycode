#include<bits/stdc++.h>
using namespace std;
int u,v;
int visited[1001];
vector<int> adj[1001];
stack<int> st;

void adj_list(){
    int a,b;
    for (int i = 0; i<v; i++){
        cin>>a>>b;
        adj[a].push_back(b);
    }
}

void dfs(int u){
    cout<<u<<" ";
    visited[u] = true;
    for(auto x : adj[u]){
        if (!visited[x])
            dfs(x);
    }
    st.push(u);
   // cout<<"st: "<<st.top()<<endl;
}
void topo_sort(){
    for (int i = 1; i<=u; i++){
        if (!visited[i]){
            cout<<"DFS cua "<<i<<": ";
            dfs(i);
            cout<<endl;
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    cin>>u>>v;
    adj_list();
    topo_sort();
}