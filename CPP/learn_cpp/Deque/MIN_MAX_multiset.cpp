#include<iostream>
#include<deque>
#include<set>
//Sliding the windows 
//Tim max cua cac doan con co do dai bang k
using namespace std;
void multiset_max(int n, int k, int A[]){
	multiset<int> ms;
	
	for(int i = 0; i<k;i++){
		ms.insert(A[i]);
	}

	cout<<*ms.rbegin()<<" ";

	for (int i = k;i < n; i++){
		ms.erase(ms.find(A[i-k]));
		ms.insert(A[i]);
		cout<<*ms.rbegin()<<" ";
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	int A[n];
	for (int i = 0; i<n ;i++)
		cin>>A[i];
	multiset_max(n,k,A);
}