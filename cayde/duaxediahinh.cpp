#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    unordered_map <int, int> mp;
    for (int i = 0; i<n;i++){
        int t;
        cin>>t;
        mp[t]++;
    }
    int count = 0;

    for (auto it : mp){
        if (it.first >= k){
            auto l = mp.find(it.first - k); 
        //    cout<<l -> first <<" "<<l -> second<<endl;
            if (l != mp.end()){
                count += max(l -> second, it.second);
            }
        }
    }
    cout<<count<<" "<<endl;
}
