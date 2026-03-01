#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x, i;
    int sum = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x;
        bool isPrime = true;
        for (int j = 2; j <= x / 2; j++) {
            if (x % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && x > 1) {
            cout << x << " eh primo" << endl;
        } else {
            cout << x << " nao eh primo" << endl;
        }
    }
    return 0;
}

