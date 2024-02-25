#include<iostream>
#include<utility>
using namespace std;
#define NMAX 2000
const int inf = 1e9;
pair <int, int> A[NMAX];
int n,k;
int main(){
    cin>>n>>k;
    int dem = 0;
    for (int i = 0; i<n;i++){
        cin>>A[i].first;
    }
    int sum;
    for (int i = 0; i<n;i++){
        sum = 0;
        sum = A[i].first;
        dem = 0;
        for (int j = i+1; j<n; j++){
            dem++;
            sum += A[j].first;
            if (sum == k){
                if (dem < A[i].second && A[i].second != 0)
                  A[i].second = dem + 1;
                else if (A[i].second == 0)
                    A[i].second = dem+1;
            }
        }
    }
    int min = inf;
    int vt;
    for (int i = 0; i<n;i++){
        if (A[i].second < min && A[i].second != 0){
            min = A[i].second;
            vt = i+1;
        }  
    }
    cout<<vt<<" "<<min<<endl;   
}