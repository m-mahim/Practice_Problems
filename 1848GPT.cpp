#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0;
    string b;
    string l = "--*";
    string r = "*--";

    for (int i = 0; i < 3; i++) {
        while (true) {
            cin >> b;
            if (b == "caw") {
                cin >> b;
                if (b == "caw") {
                    cout << sum << endl;
                    sum=0;
                    break;
                }
            }
            if (b == l) {
                sum += 1;
            } else if (b == r) {
                sum += 4;
            }

        }
    }

    return 0;
}

