#include<iostream>
using namespace std;
void thaphanoi(int n, char a,char c,char b){
    if (n==0){
        return;
    }
    thaphanoi(n-1,a,b,c);
    cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
    thaphanoi(n-1,b,c,a);

}

int main(){
    int n;
    cin>>n;
    char a='A',b='B',c='C';
    thaphanoi(n,a,c,b);
}
