#include<iostream>
#include<string>
using namespace std;
int main(){
  int sum;
  int n;
  cin>>n;
  if (n<=5){
    cout<<n<<endl;
  }  
  else{
    string s = to_string(n);
    for (int i = 0; i<s.size(); i++)
        sum+= (s[i] - 48) % 2;
    cout<<sum/2<<endl;
  }
  return 0;
}
