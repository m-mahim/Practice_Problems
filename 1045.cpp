#include <bits/stdc++.h>
using  namespace std;
int main()
{
    double A,B,C,a,b,c;
    cin>>a>>b>>c;

   A=max(c,max(a,b));
   C=min(c,min(a,b));
   B=a+b+c-A-C;

        if( A >= B + C|| B >= A + C ||  C >= A + B)
         {cout<<"NAO FORMA TRIANGULO"<<endl;
    }
        else
            {
        if(A*A == B*B + C*C){
         cout<<"TRIANGULO RETANGULO"<<endl;
    }
        if(A*A > B*B + C*C ){
         cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
        if(A*A < B*B + C*C){
         cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
        if(A==B&&B==C&&C==A){
         cout<<"TRIANGULO EQUILATERO"<<endl;
    }else{

        if((A==B&&B!=C)||(B==C&&C!=A)||(C==A&&A!=B)){
         cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    }
}
    return 0;
}

