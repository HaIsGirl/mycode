#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int A[], int left, int right, int key){
    while (left <= right){
        int mid = (left + right)/2;
        if (A[mid] == key)
            return mid;
        if (A[mid] > key)
            right = mid - 1 ;
        if (A[mid] < key)
            left = mid + 1 ; 
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int key;
    int A[10000];
    cin>>key;
    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    if (binary_search(A,0,n-1,key) != -1){
        cout<<binary_search(A,0,n-1,key);
    }
    else
        cout<<"khong tim thay phan tu";
    return 0;
}