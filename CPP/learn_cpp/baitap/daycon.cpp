#include<iostream>
#include<utility>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int s = 0;
    int count = 0;
     pair <int, int> A[n+1];
    for (int i = 0; i<n; i++){
        cin>>A[i].first;
        s += A[i].first;
        A[i].second = s;
        if (A[i].second % k == 0)
            count++;
    }
    int d = 0;
    for (int i = 0; i<n-1; i++){
        for (int j = i+1; j<n; j++){
            A[j].second -= A[i].first;
            if (A[j].second % k == 0)
                count++;
        }
        cout<<endl;
    }
    cout<<count<<" ";
}
