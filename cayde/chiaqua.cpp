//https://oj.vnoi.info/problem/th_thpt_20_a
//O(sqrt(N))

#include<iostream>
#include<algorithm>
using namespace std;

int solve(int a, int b){
    int Min = min(a,b);
    int Max = max(a,b);
    int count = 0;
    for (int i = 1; i*i<=Min;i++){
        if ((a%i == 0) && (b%i==0)){
            count++;
            int j = Min/i;
            if(j != i && Max % j == 0)
                count++;
        }
    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("CAU1.INP","r",stdin);
    freopen("CAU1.OUT","w",stdout);
    int a,b;
    cin>>a>>b;
    cout<<solve(a,b)<<endl;
    return 0;
}