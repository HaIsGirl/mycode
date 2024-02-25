#include<iostream>
#include<utility>
#include<cmath>
#include<iomanip>
using namespace std;
typedef pair<int,int> point;


double dist(point A, point B){
    return sqrt(((B.first - A.first) * (B.first - A.first)) + ((B.second - A.second) * (B.second - A.second)));
}

double bankinh(point A, point B, point C){
    double a = dist(A, B);
    double b = dist(B,C);
    double c = dist(A,C);
    double p = (a + b + c)/2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    return (a + b + c)/(4*s);
}

int main(){
    int n;
    cin>>n;
    point A[n+1];
    for (int i = 0; i<n; i++){
        cin>>A[i].first>>A[i].second;
    }   
    double result = 0;
    for (int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n;k++){
                double r  = bankinh(A[i], A[j], A[k]);
                if (result < r){
                    result = r;
                }
            }
        }
    }
    cout<<setprecision(3)<<fixed<<result<<" ";
    return 0;
}
