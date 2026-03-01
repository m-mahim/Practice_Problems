#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,x,y,i;
int sum =0;

while(1)
{

    cin>>x;
    if (x==0)
        break;
    else if(x%2!=0)
    {
        x=x+1;
        sum=x;
         for(int j=1;j<=4;j++)
        sum+= x+2*j;

    }
    else
    {
        sum=x;
        for(int j=1;j<=4;j++)
        sum+=x+2*j;

    }
    cout<<sum<<endl;
}


}


