#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,x,y,i;
int sum =0;
cin >>n;
for(i=0;i<n;i++)
{
    cin>>x>>y;
    if(x%2==0)
    {
        x=x+1;
        sum=x;
         for(int j=1;j<=y-1;j++)
        sum+= x+2*j;

    }
    else
    {
        sum=x;
        for(int j=1;j<=y-1;j++)
        sum+=x+2*j;

    }
    cout<<sum<<endl;
}


}


