#include<iostream>
#include<cmath>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n+5],dp[10001] = {};
    for (int i = 1; i<=n; i++)
        cin>>A[i];
    dp[1] = A[1];
    dp[2] = dp[1] + A[2];
    dp[3] = max(dp[1] + A[3], dp[2]);
    dp[3] = max(dp[3], A[2] + A[3]);
    
    for(int i = 4; i<=n; i++){
        dp[i] = max(dp[i-3] + A[i-1] + A[i], dp[i-2] + A[i]);
        dp[i] = max(dp[i], dp[i-1]);
        cout<<dp[i]<<" ";
    }        
    cout<<endl;
    int i = n;
    stack<int> st;
    while (i > 0){
        if (dp[i] == dp[i-1]){
            i--;
        }
        else if(dp[i] == dp[i-2] + A[i]){
            st.push(i);
            i-=2;
        }
        else{
            st.push(i);
            st.push(i-1);
            i-=3;
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    
    cout<<dp[n]<<endl;
}