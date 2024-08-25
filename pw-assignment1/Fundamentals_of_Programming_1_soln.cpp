#include<bits/stdc++.h>
using namespace std;
int main(){
    //1
    int a,b;cin>>a>>b;
    if(a>b)cout<<"first number "<< a<<" is the largest.";
    else cout<<"first number "<< b<<" is the largest."; 

    //2
    int r;cin>>r;
    if(2*r*3.14<r*r*3.14)cout<<"area > perimeter.";
    else cout<<"area < perimeter.";

    //3
    int d;cin>>d;
    if(d%4==0)cout<<"yes";
    else cout<<"no";

    //4
    int p,q;cin>>p>>q;
    if(p*q>2*(p+q))cout<<"area > perimeter.";
    else cout<<"area < perimeter.";

    //5
    int a1,a2,a3;cin>>a1>>a2>>a3;
    if(a1==a2 && a2==a3)cout<<"equilateral";
    else if(a1==a2 || a2==a3 || a3==a1)cout<<"isoceles";
    else cout<<"scalene";

    //6

    int b1,b2,b3;cin>>b1>>b2>>b3;
    if(b1>b2 && b1>b3)cout<<"A is greatest number";
    else if(b2>b1 && b2>b3)cout<<"B is greatest number";
    else cout<<"C is greatest number";

    //7 
    int u,v;cin>>u>>v;
    if(u==0 && v==0)cout<<"ORIGIN";
    else if(u==0 )cout<<"y-axis";
    else if(v==0)cout<<"X-axis";

    //8
    int x1,y1,x2,y2,x3,y3;cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if((x2-x1)/(y2-y1)==(x3-x2)/(y3-y2))cout<<"yes";
    else cout<<"No";

    //9
    char ch;cin>>ch;
    if((ch<='z' && ch>='a') ||(ch<='Z' && ch>='A') )cout<<"character";
    else if(ch<='9' && ch>='0')cout<<"digit";
    else cout<<"special character";

    //10
   // answer: value of b and c are respectively 300 and 200;


}