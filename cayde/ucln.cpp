#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("input.inp","r", stdin);
	freopen("output.out","w", stdout);
	long long n,m;
	cin>>n>>m;
	while (n!=m){
		if (n>m){
			n=n-m;
		}
		else
			m = m-n;
	}
	cout<<m<<endl;
}