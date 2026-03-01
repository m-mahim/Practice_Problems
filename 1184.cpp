#include <bits/stdc++.h>
using namespace std;

int main() {
    char w;
    cin >> w;

    double sum = 0;
    double avg = 0;
    double arr[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> arr[i][j];
        }
    }

    if (w == 'S') {
        //j=u
        int u = 1;
        for (int k = u; k < 12; k++) {
            for (int j = 0; j < k; j++) {
                sum += arr[k][j];
            }
            u++;
        }
        cout << showpoint << fixed << setprecision(1) << sum << endl;
    } else if (w == 'M') {
        //count to calculate cells
        //u
        int count = 0;
        int u = 1;
        for (int k = u; k < 12; k++) {
            for (int j = 0; j < k; j++) {
                sum += arr[k][j];
                count++;
            }
            u++;
        }
        avg = sum / count;
        cout << showpoint << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}
