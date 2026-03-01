#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
int cnt=0,sum=0;
double avg;
while(cin>>n)
{
    if(n<0)
        break;
    sum+=n;
    cnt++;

}
avg=(double)sum/cnt;
cout<<fixed<<setprecision(2)<<avg<<endl;


}


