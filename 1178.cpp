#include <bits/stdc++.h>

using namespace std;

int main() {
     double k;
    cin>>k;
    double  N [100];

         for (int i = 0; i < 100; i++) {
                N[i] = k;
                k=k/2;
    }

      for (int i = 0; i < 100; i++) {
        cout <<showpoint<<fixed<<setprecision(4) << "N[" << i << "] = "<< N[i]<<endl;
    }
      return 0;
}

