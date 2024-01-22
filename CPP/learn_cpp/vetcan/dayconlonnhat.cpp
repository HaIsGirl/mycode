#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int max = 0,l = 0,r = 0;
    for (int i = 0; i<n;i++){
        cin>>A[i];
    }
    for (int i = 0; i<n;i++){
        int sum = 0;
        for (int j = i+1; j<n-1;j++){
            sum += A[j];
            if (max < sum){
                max = sum;
                l = i;
                r = j;
            }
        }
    }
    cout<<"MAX: "<<max<<endl;
    for (int i = l; i < r; i++){
        cout<<A[i]<<" ";
    }
}