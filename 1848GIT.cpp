#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    int sum = 0, total = 0;
for (int i =1;i<=3;i++)
{
        while (getline(cin, input)) {
        if (input == "caw caw") {
            cout << total << endl;
            total = 0;
            break;
        } else {
            int value = 0;
            if (input[0] == '*') value += 4;
            if (input[1] == '*') value += 2;
            if (input[2] == '*') value += 1;
            total += value;
        }
    }
}


    return 0;
}
