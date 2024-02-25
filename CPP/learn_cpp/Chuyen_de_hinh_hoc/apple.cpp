#include<iostream>
#include<utility>
#include<iomanip>
using namespace std;
typedef pair<int,int> point;

double Stamgiac(point A, point B, point C){
    return abs(A.first * (B.second - C.second) + B.first * (C.second - A.second) + C.first * (A.second - B.second)) / 2;
} 

int main(){
    point A;
    point B;
    point C;
    cin>>A.first>>A.second>>B.first>>B.second>>C.first>>C.second;
    float dientich = Stamgiac(A,B,C);
    
    int n;
    cin>>n;
    point S[n+1];
    int count = 0 ;
    for (int i = 0; i<n;i++){
        cin>>S[i].first>>S[i].second;
        int tamgiac1 = Stamgiac(S[i], A, B);
        int tamgiac2 = Stamgiac(S[i], A, C);
        int tamgiac3 = Stamgiac(S[i], B, C);
        int sum = tamgiac1 + tamgiac2 + tamgiac3;
        if (abs(sum - dientich < 1e-9))
            count++;
    }
    cout<<setprecision(1)<<fixed<<dientich<<endl;
    cout<<count<<endl;
}
