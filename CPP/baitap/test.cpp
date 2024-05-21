#include <iostream>
#include<vector>
using namespace std;

long long sumOfDivisors(int n) {
  if (n <= 0) return 0;

  vector<long long> sumDivisors(n + 1);
  for (int i = 1; i <= n; ++i) {
    sumDivisors[i] = i;
  }

  for (int i = 2; i <= n; ++i) {
    if (sumDivisors[i] == i) {
      for (int j = i * i; j <= n; j += i) {
        sumDivisors[j] += i;
      }
    }
  }

  return sumDivisors[n];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie();
  //cout.tie();

  int n = 1000000;
  long long sum = sumOfDivisors(n);
  cout << "Tổng các ước của các số từ 1 đến " << n << " là: " << sum << endl;

  return 0;
}
