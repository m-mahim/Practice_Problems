#include<bits/stdc++.h>

using namespace std;

int main()
{
int x;
unsigned int fib[16];
fib[0]=0;
fib[1]=1;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x;
    for (int i=2;i<=x;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
cout<<"Fib("<<i<<") = "<<fib[x]<<endl;

}

return 0;
}

