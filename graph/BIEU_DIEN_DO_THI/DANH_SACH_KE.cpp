#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int u,v;
    cin>>u>>v;
    vector<int> adj[v+5];
    for (int i = 0; i<v; i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i<=v; i++){
        cout<<i<<"{ ";
        for (auto x : adj[i])
            cout<<x<<" ";
        cout<<" }"<<endl;
    }
    return 0;
}