//Bài 2 hàng cây 
#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

int socandoi(vector<int> A, int k){
	deque<int> dq_max, dq_min;
	int count = 0;
	int l = 0;
	for (int r = 0; r<A.size(); r++){
		while (!dq_max.empty() && A[r] > A[dq_max.back()]){
			dq_max.pop_back();
		}
		dq_max.push_back(r);
		while (!dq_min.empty() && A[r] < A[dq_min.back()])
			dq_min.pop_back();
		dq_min.push_back(r);

		while (A[dq_max.front()] - A[dq_min.front()] > k){
			l++;
			if(dq_max.front() < l)
				dq_max.pop_front();
			if(dq_min.front() < l)
				dq_min.pop_front();
		}		

		count = max(count, r - l + 1);
	}

	return count;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> A(n);
	for (int i = 0; i<n; i++)
		cin>>A[i];
	cout<<socandoi(A,k)<<endl;
}