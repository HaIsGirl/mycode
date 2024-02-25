#include<iostream>
#include<utility>
#include<cmath>

using namespace std;
typedef pair<int, int> point;
struct line
{
    /* data */
    float a;
    float b;
    float c;
};

//typedef struct line line;
float distPL(line L, point P){
    return (abs(L.a*P.first + L.b*P.second + L.c)/sqrt(L.a * L.a + L.b*L.b));
}
int main(){
    line LA;
    LA.a  = 4;
    LA.b = 3;
    LA.c = 1;
    line LB;
    LB.a = 3;
    LB.b = -4;
    LB.c = -26;
    line LC;
    LC.a = 3;
    LC.b = 4;
    LC.c = -11;
    point A,B,C;
    cin>>A.first>>A.second>>B.first>>B.second>>C.first>>C.second;
    cout<<"A --> LA = "<<distPL(LA, A)<<endl;
    cout<<"B --> LB = "<<distPL(LB, B)<<endl;
    cout<<"C --> LC = "<<distPL(LC, C)<<endl;
}
