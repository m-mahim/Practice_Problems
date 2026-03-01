#include <bits/stdc++.h>

using namespace std;

int main() {


            int n;
            char w;
            cin>>n;
            cin>>w;
            double sum=0;
            double avg=0;

                double arr[12][12];

            for(int i=0;i<12;i++)
                {
                for(int j=0;j<12;j++)
                    {
                        cin>>arr[i][j];
                    }
                }
            if(w=='S')
            {
            for(int j=0;j<12;j++)
                {
                  sum+=arr[j][n];
                }
                cout<<showpoint<<fixed<<setprecision(1)<<sum<<endl;
            }
           else if(w=='M')
            {
            for(int j=0;j<12;j++)
                {
                  sum+=arr[j][n];
                }
                avg=sum/12;
                cout<<showpoint<<fixed<<setprecision(1)<<avg<<endl;
            }

      return 0;
}


