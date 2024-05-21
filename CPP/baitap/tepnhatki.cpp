#include<bits/stdc++.h>
using namespace std;

int gt(int k){

    int giait = 1;
    for (int i = 2; i<=k;i++){
        giait*=i;
    }
    return giait;
}
int main(){
    unordered_map <int,int> F;
    int n,k;
    string s;

    cin>>n;
    cin.ignore();
    
    getline(cin,s);
    cin>>k;

    string s1;
    int i = 0;
    while (i<=s.size()){
        while (s[i] >= '0' && s[i] <='9'){
            s1 += s[i];
            i++;
        }
        int num = 0;
        if (s1 != ""){
            num = stoi(s1);
            F[num]++;
         //   cout<<num<<" ";
            s1 = "";
        }
        if (s[i] == '-' && (s[i+1] >= '0' && s[i+1] <= '9')){
            s1 = '-';
            i++;
            while (s[i] >= '0' && s[i] <='9'){
                s1 += s[i];
                i++;
            }
        }
        num = 0;
        if (s1 != ""){
            num = stoi(s1);
            F[num]++;
         //   cout<<num<<" ";
            s1 = "";
        }
        i++;
    }
    int count = 0;
    for (auto it : F){
        auto t = F.find(k - it.first);
        if (t != F.end()){
            if (it.first != t ->first) 
                count+=it.second * t ->second;
            else{
                //int giaithua = gt(it.second);
                count+= gt(it.second) / (2*gt(it.second - 2));
            }
            //cout<<it.second<<" "<<t -> second<<endl;
            F[it.first] = 0;
        }
    }
    cout<<count<<endl;
}