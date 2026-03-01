#include<bits/stdc++.h>

using namespace std;

int main()
{
    int value=0,sum=0;
    string input;

    while(getline(cin,input))
    {
        if(input=="caw caw")
        {
            cout<<sum<<endl;
            sum=0;
        }else{
        if(input[0]=='*')
            value +=4;

        if(input[1]=='*')
            value +=2;

        if(input[2]=='*')
            value +=1;
            sum+=value;

        }
    }
    return 0;
}
