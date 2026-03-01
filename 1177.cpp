#include <bits/stdc++.h>

using namespace std;

int main() {
    int k=0;
   int  N [1000];



            for (int i = 0; i < 1000; i++) {
                    for(int j = k; j < 3; j++){
                            N[i]=j;
                            break;
                }
                k++;
                if(k>=3)
                {
                    k=0;
                }
            }

      for (int i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = "<< N[i]<<endl;
    }
      return 0;
}
