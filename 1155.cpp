#include<bits/stdc++.h>

using namespace std;

int main()
{
double n=1;
for(int i=2;i<=100;i++)
{
n+=1/(double)i;
}


cout<<showpoint<<fixed<<setprecision(2)<<n<<endl;

}



