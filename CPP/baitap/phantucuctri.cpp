#include<iostream>
using namespace std;

int main(){
    int n,check=0;
    cin>>n;
    int A[n];
    for (int i=0; i<n;i++){
        cin>>A[i];
    }
    for (int i = 1; i < n-1; i++)
    {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1])
        {
            check+=1;
           if (check>1)
                cout<<";";
            cout<<i;
        }
    }
}