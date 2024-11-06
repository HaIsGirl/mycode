#include<iostream>
#include<deque>
using namespace std;
//Tim max cua doan con co do dai bang k trong mang co do dai n
int main(){
	int n,k;
	cin>>n>>k;
	int A[n + 5];
	for (int i = 0; i<n; i++){
		cin>>A[i];
	}
	deque<int> dq;
	for(int i = 0; i<k;i++){
		while (!dq.empty() && A[i] > A[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
	cout<<A[dq.front()]<<" ";
	for (int i = k; i<n ; i++){
		if(dq.front() <= i - k)
			dq.pop_front();
		while(!dq.empty() && A[dq.back()] < A[i]){
			dq.pop_back();
		}
		dq.push_back(i);
		cout<<A[dq.front];
	}
	cout<<endl;
	return 0;
}