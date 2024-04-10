#include<iostream>
#include<vector>
using namespace std;
const int NMAX = 1e9;
bool A[NMAX] = {false};

void sangnguyento(int n){
    for (int i = 2; i<=n; i++){
        if (A[i] == false)
            for (int j = 2; i*j<=n; j++){
                if (A[i*j] == false)
                    A[i*j] = true;
            }
    }
}

int binary_search(int n , int k, vector <int> A){
    int l = 0, r = n-1, mid;

    while (l<=r){
        mid = (l+r)/2;
        if (A[mid] == k){
            return mid;
        }
        else if (A[mid] < k)
            l = mid+1;
        else if (A[mid] > k)
            r = mid -1;
    }
    return -1;
}


int main(){
    int n,k;
    cin>>n>>k;
    sangnguyento(n);
    vector<int> a;
    for (int i = 2; i<=n; i++){
        if (A[i] == false)
            a.push_back(i);
    }
    for (int i = 0; i<a.size() ; i++){
        int l = a[i] - k;
        int bs = binary_search(a.size(),l,a);
        if (bs != -1)
            cout<<"("<<a[i]<<","<<a[bs]<<")"<<endl;
    }
}