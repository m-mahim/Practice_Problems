#include <bits/stdc++.h>
using namespace std;

int main() {
    char w;
    cin >> w;
    int cnt=0;
    double sum = 0;
    double avg = 0;
    double arr[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> arr[i][j];
        }
    }
    for (int k = 1; k <12; k++) {
            for (int j = 0; j <12-k; j++) {
                   sum += arr[k][j];
                   cnt++;
            }
        }

    if (w == 'S') {
        cout << showpoint << fixed << setprecision(1) << sum << endl;
        }
    else if (w == 'M') {
          avg = sum / cnt;
        cout << showpoint << fixed << setprecision(1) << avg << endl;
        }
    return 0;
}
