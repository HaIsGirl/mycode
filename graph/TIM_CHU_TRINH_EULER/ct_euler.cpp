#include<bits/stdc++.h>
using namespace std;

set<int> adj[1001];
int u,v;
int dgree[1001] = {};
void adj_list(){
    for (int i = 1; i<=v; i++){
        int a,b; cin>>a>>b;
        adj[a].insert(b);
        adj[b].insert(a);
        dgree[a]++;
        dgree[b]++;
    }
}

void euler(int u){
    vector<int> EC;
    stack<int> st;
    st.push(u);
    while(!st.empty()){
        int x = st.top();
        if (adj[x].size() != 0){
            int y = *adj[x].begin();
            st.push(y);
            adj[x].erase(y);
            adj[y].erase(x);
        }
        else{
            st.pop();
            EC.push_back(x);
        }
    }
    for (auto &x:EC){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(){
    cin>>u>>v;
    adj_list();
    euler(1);
    //Su dung mang degree de tim cac cap boi le neu di tim duong di euler
}