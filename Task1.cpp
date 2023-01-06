#include <iostream>
using namespace std;
  
float volume(float,float,float);
float uvolume(float,string);
main()
{
  float l,w,h,v;
  float vu;
  string o;
  cout<<"Enter length of pyramid (in meters): ";
  cin>>l;
  cout<<"Enter width of pyramid (in meters): ";
  cin>>w;
  cout<<"Enter height of pyramid (in meters): ";
  cin>>h;
  cout<<"Enter the unit of output: ";
  cin>>o;
  v = volume(l,w,h);
  vu = uvolume(v,o);
  cout<<vu<<" "<<" cubic "<<o;
}
float volume(float l,float w,float h)
{
 float a;
 a = 0.33*l*w*h;
 return a;

}
float uvolume(float v,string o)
{
 float out;
 if(o=="millimeters")
 {
  out = v*1000000000;  
 } 
 if(o=="centimeters")
 {
  out = v*1000000;  
 } 
 if(o=="kilometers")
 {
  out = v/1000000000;  
 } 
 return out;
}

