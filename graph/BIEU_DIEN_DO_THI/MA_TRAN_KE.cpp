#include<iostream>
using namespace std;
int main(){
    int u,v;
    cin>>u>>v;
    int adj[u+5][u+5] = {};
    for (int i = 1; i<=v; i++){
        int a,b;
        cin>>a>>b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    for (int i = 1; i <= v; i++){
        for (int j = 1; j<=v; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}