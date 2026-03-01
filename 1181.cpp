#include <bits/stdc++.h>

using namespace std;

int main() {


            int askrow;
            char askwork;
            cin>>askrow;
            cin>>askwork;
            double sum=0;
            double avg=0;

                int M[12][12];

            for(int i=0;i<12;i++)
                {
            for(int j=0;j<12;j++)
                {
                    cin>>M[i][j];
                }
                }
            if(askwork=='S')
            {
            for(int j=0;j<12;j++)
                {
                  sum+=M[askrow][j];
                }
                cout<<showpoint<<fixed<<setprecision(1)<<sum<<endl;
            }
           else if(askwork=='M')
            {
            for(int j=0;j<12;j++)
                {
                  sum+=M[askrow][j];
                }
                avg=sum/12;
                cout<<showpoint<<fixed<<setprecision(1)<<avg<<endl;
            }

      return 0;
}


