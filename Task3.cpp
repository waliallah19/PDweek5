#include<iostream>
#include<cmath>
using namespace std;

float whr(int,int);
main()
{
  int nh,d,w,exh,lsh;
  float wh;
  cout<<"Enter needed hours: ";
  cin>>nh;
  cout<<"Enter Days the firm has : ";
  cin>>d;
  cout<<"Enter total number of workers: ";
  cin>>w;
  wh = whr(d,w); 
  wh = floor(wh);
  if(wh>nh)
  {
   exh = wh-nh; 
   cout<<"Yes!"<<exh<<" hours left.";
  }
  if(wh<nh)
  {
   lsh = nh-wh;
   cout<<"Not enough time! "<<lsh<<" hours needed. "; 
  }
}
float whr(int d,int w)
{
 float a,b,c;
 a = 0.9*d;
 b = a*10;
 c = b*w;
 return c;
}