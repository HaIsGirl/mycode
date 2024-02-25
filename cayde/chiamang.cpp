#include<iostream>
#include<utility>
using namespace std;

int main(){
    int n;
    cin>>n;
    pair <int, int> A[n];
    A[0].first = 0;
    for (int i = 1; i<=n; i++){
        cin>>A[i].first;
        A[i].second = A[i-1].second + A[i].first;
    }
    if (A[n].second % 2 == 0)    
        for (int i = 1; i<=n; i++){
         if (A[i].second == A[n].second / 2){
             cout<<A[i].first<<endl;
             break;
         }
        }
    else{
        cout<<0<<endl;
    }
    return 0;
}
