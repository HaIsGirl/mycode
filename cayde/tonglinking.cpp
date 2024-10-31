#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int prefix_sum[n+5] = {};
	int A[n+5] = {};
	for (int i = 1; i<=n;i++){
		cin>>A[i];
		prefix_sum[i] = prefix_sum[i-1] + A[i]; 
	}

	int sum = 1;

	for(int i = 1; i<=n; i++){
		sum += i * (prefix_sum[n] - prefix_sum[i]); 
	}
	cout<<sum<<endl;
}