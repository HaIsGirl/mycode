#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    int d=0;
    for (int &x : A){
        cin>>x;
    }
    int x=0,y=1;
    while (d<n-1){
        if (A[x]>A[y]){
            cout<<x+1<<" ";
            d++;
            if (x+1==y)
                x+=2;
            else x++;
        }
        else{
            cout<<y+1<<" ";
            d++;
            if (y+1==x)
                y+=2;
            else y++;
        }
    }
}
