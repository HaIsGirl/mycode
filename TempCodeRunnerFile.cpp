#include <iostream>
#include <vector>

using namespace std;

// Hàm tính giai thừa sử dụng vector để lưu trữ các chữ số
vector<int> factorial(int n) {
  vector<int> result;
  result.push_back(1);
  
  for(int i=2; i<=n; i++) {
    int carry = 0;
    for(int j=0; j<result.size(); j++) {
      int temp = result[j] * i + carry;
      result[j] = temp % 10;
      carry = temp / 10;
    }
    
    while(carry > 0) {
      result.push_back(carry % 10);
      carry /= 10;
    }
  }
  
  return result;
}

int main() {
  int num;
  cin >> num;
  
  vector<int> result = factorial(num);
  
  for(int i = result.size()-1; i>=0; i--) {
    cout << result[i];
  }
  cout << endl;
  
  return 0;
}