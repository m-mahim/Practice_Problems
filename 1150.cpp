#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,n,z;
    n=z-x;
    int sum=0;
    int cnt =0;
    cin>>x;
    while(cin>>z)
    {
        if(z>x)
        {
            break;
        }
        }
                for(int i=x;i<n;i++)
               {
                   sum=sum+i;
                   cnt ++;
                   if(sum>z)
                    {
                        break;
                    }
               }

   cout<<cnt<<endl;


}

