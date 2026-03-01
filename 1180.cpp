#include <bits/stdc++.h>

using namespace std;

int main() {
     int n;
     int minimum=INT_MAX,position=0;
     cin>>n;
     int arr[n];
     for(int i = 0;i<n;i++)
     {
         cin>>arr[i];
     }
     for(int i = 0;i<n;i++)
     {
         if(arr[i]<=minimum)
         {
             minimum=arr[i];
             position=i;
         }
     }
     cout<<"Menor valor: "<<minimum<<endl;
     cout<<"Posicao: "<<position<<endl;



      return 0;
}


