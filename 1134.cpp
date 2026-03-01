#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	int alco=0,gas=0,dis=0;
	while(a!=4)
	{
	   cin>>a;
	   if(a == 1)
	    alco++;
	   else if (a == 2)
	    gas++;
	   else if (a == 3)
	    dis++;
	}
	cout<<"MUITO OBRIGADO"<<endl<<"Alcool: "<<alco<<endl<<"Gasolina: "<<gas<<endl<<"Diesel: "<<dis<<endl;
	return 0;

}
