#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vt;
typedef long long ll;
#define loop(i,n) for (int i = 0; i<n; i++)

int main(){
    int n;
    cin>>n;
    vt A(n);
    for (int i = 0; i<n; i++)
        cin>>A[i];
    int l;
    cin>>l;
    vt x(l);
    vt t;
    for (int i = 0; i<l;i++){
       cin>>x[i];
       bool check = false;
       for (int j = 0; j<n; j++){
            if (x[i] == A[j]){
                t.push_back(j+1);
                check = true;
                break;
            }
        }
        if (check == false) t.push_back(-1);
    }

int tr = 0, fl = 0;
    for (int i = 0; i<t.size();i++){
        cout<<t[i]<<endl;
        if (t[i] != -1) tr++;
        else fl++;
    }
    if (tr > fl) cout<<1<<endl;
    else if (tr < fl) cout<<-1<<endl;
    else cout<<0<<endl;
}