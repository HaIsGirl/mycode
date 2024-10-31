#include <bits/stdc++.h>
using namespace std;
int main () {
    long long a[1000001], n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(k >= 0 && k < n) {
        for(int i = k; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
    cout << endl;

    return 0;
}