//Tim doan con lon nhat O(n)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for (int &x : A){
        cin>>x;
    }
    int Max = -1e9;
    int sum = 0;
    for (int i = 0; i<n;i++){
        sum+=A[i];
        Max = max(Max, sum);
        if (sum < 0)
            sum = 0;
    }
    cout<<Max<<endl;
}