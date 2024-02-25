#include<iostream>
#include<string>
#include<algorithm>
#include<time.h>
using namespace std;
#define Nmax int(5e6)
bool A[Nmax] = {};
void sangnguyento(){
	for (int i = 2; i*i<=Nmax; i++){
		for (int j = 2; i*j<=Nmax; j++){
			if (A[i] == 0)
				A[i*j] = 1;
			}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("input.inp","r",stdin);
	freopen("output.out", "w", stdout);
	clock_t start, end;
	double cpu_time_used;
	string s;
	getline(cin,s);
	start = clock();
	sangnguyento();
	string s1;
	int i = 0,dem = 0;
	int Max = 0;
	while (i<s.size()){
		while (s[i] >= '0' && s[i]<= '9'){
			s1 += s[i];
			dem++;
			i++;
		}
		if (s1 != ""){
			int temp = std::stoi(s1);
			if (A[temp] == 0)
				Max = max(Max, temp);
			}
		s1 = "";
		i++;
	}
	end = clock();
	cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
	cout<<"RUN TIME: "<<cpu_time_used<<endl;
	cout<<dem<<endl;
	cout<<Max<<endl;
}