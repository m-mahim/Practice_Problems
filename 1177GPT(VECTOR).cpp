#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

    int k = 0;
    vector<int> N[1000];

    for(int j = k; j < 3; j++) {
        for(int i = 0; i < 1000; i++) {
            N[i].push_back(j);
           continue;

        }
            k++;
        break;
        k++;
    }

    for(int i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = ";
        for(int val : N[i]) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

