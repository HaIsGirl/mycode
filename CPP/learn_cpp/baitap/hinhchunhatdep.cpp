#include<iostream>
using namespace std;

int bs(int n,int k,int A[]){
    int l = 1, r = n;
    while (l <= r){
        int mid = (l+r)/2;
        if (A[mid] == k)
            return mid;
        if (A[mid] < k)
            l = mid + 1;
        if (A[mid] > k)
            r = mid - 1;
    }
    return -1;
}
int main(){
    int x;
    cin>>x;
    int A[1000];

    for (int i = 1; i<=x; i++){
        A[i] = x*i;
    }
    bool check = false;
    int j;
    if (x < 50)
        j = x-1;
    //else if ()
    int val = 0;
    while (check == false){
        val = j*j;
        int bn = bs(x,val,A);
        if (bn != -1){
            cout<<bn<<endl;
            check = true;
        }
        j--;
        if (j==0){
            cout<<x<<endl;
            check = true;
        }
    }
    return 0;
}