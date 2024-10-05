#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int v,u;
    cin>>u>>v;
    pair <int,int> adj[v+5];
    for (int i = 1; i<=v; i++){
        int a,b;
        cin>>a>>b;
        adj[i].first = a;
        adj[i].second = b;
    }

    for (int i = 1; i<=v; i++)
        cout<<"Diem dau: "<<adj[i].first<<" Diem cuoi: "<<adj[i].second<<endl;
}