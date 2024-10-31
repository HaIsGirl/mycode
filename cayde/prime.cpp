#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i = 0; i<n;i++){
		cin>>A[i];
	}
	int sum = 0;
	int Max = 0;
	for(int i = 1; i<n-1;i+=2){
		Max = max(A[i-1],A[i]);
		Max = max(Max,A[i+1]);
		sum+=Max;
		}
	cout<<sum<<endl;
	return 0;
}