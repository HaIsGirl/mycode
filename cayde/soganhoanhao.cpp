#include<iostream>
#include<cmath>
#include<utility>
using namespace std;

int sumuoc(int n){
    int sum = 0;
    for (int i = 1; i<= sqrt(n); i++){
        if (n%i == 0){
            sum+=i;
            if (i != n/i)
                sum+=n/i;
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    pair <int, int> A[n]; 

    for (int i = 0; i<n; i++){
        cin>>A[i].first;
        if (A[i].first * 2 <= sumuoc(A[i].first))
            A[i].second = 1;
    }
    for (int i=0; i<n;i++){
        cout<<A[i].second;
    }
}
