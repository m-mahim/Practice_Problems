#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	for(int i = 0;i <b;i+=a)
    {
        for(int j = 0;j < a;j++)
        {
            if (j==a-1)
            {
                cout<<i+j+1<<endl;
            }
            else
            {
                cout<<i+j+1<<" ";
            }
        }

	}
	return 0;
}



