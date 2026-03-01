#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
int cnt2=0,cnt3=0,cnt4=0,cnt5=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){

if(arr[i]%2==0){
++cnt2;
}

if(arr[i]%3==0){
++cnt3;
}

if(arr[i]%4==0){
++cnt4;
}

if(arr[i]%5==0){
++cnt5;
}
}
cout<<cnt2<<" Multiplo(s) de 2"<<endl;

cout<<cnt3<<" Multiplo(s) de 3"<<endl;

cout<<cnt4<<" Multiplo(s) de 4"<<endl;

cout<<cnt5<<" Multiplo(s) de 5"<<endl;


return 0;
    }

