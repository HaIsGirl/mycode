#include<iostream>
#include<utility>
using namespace std;
typedef pair <int, int> vecto;
vecto operator +(vecto a, vecto b){
    return vecto(a.first + b.first, a.second + b.second);
}
vecto operator -(vecto a, vecto b){
    return vecto(a.first - b.first, a.second - b.second);
}
vecto operator *(float k, vecto a){
    return vecto(k* a.first, k*a.second);
}

int main(){
    vecto a,b,c;
    cin>>a.first>>a.second>>b.first>>b.second>>c.first>>c.second;
    vecto u = 3.0*a + 2.0 *b - 4.0*c;
    vecto vx = b - c + a;
    cout<<"u = "<<u.first<<" "<<u.second<<endl;
    cout<<"v = "<<vx.first<<" "<<vx.second<<endl;
    return 0;
}