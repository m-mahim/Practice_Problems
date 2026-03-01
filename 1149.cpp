#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,n;
    int sum=0;
    cin>>x;
    while(cin>>n)
    {
        if(n>=1)
        {
            for(int i=x;i<x+n;i++)
               {
                   sum=sum+i;
               }
               break;

        }
    }
    cout<<sum<<endl;

}
