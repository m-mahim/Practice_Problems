#include <bits/stdc++.h>
using namespace std;

int main() {
 int day1,day2,d,h,m,s;
 int h1,h2,m1,m2,s1,s2;
 string day;

 cin>>day>>day1;
 scanf("%d : %d : %d",&h1,&m1,&s1);

 cin>>day>>day2;
 scanf("%d : %d : %d",&h2,&m2,&s2);

s=s2-s1;
m=m2-m1;
h=h2-h1;
d=day2-day1;
if(s<0){
s+=60;//adding 60 seconds and reducing a minute
m--;
}

if(m<0){
    m+=60;//add 60minutes and reduce an hour
    h--;

}

if(h<0)
{
    h+=24;//adding 24 hour and reducing a day
    d--;
}

cout<<d<<" dia(s)"<<endl<<h<<" hora(s)"<<endl<<m<<" minuto(s)"<<endl<<s<<" segundo(s)"<<endl;

  return 0;
}
