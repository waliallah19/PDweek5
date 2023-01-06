#include<iostream>
using namespace std;

float final(float , float);
int per(char);
string type(char);
main()
{
  float price,t;
  char c;
  float fp,tp;
  string name;
  cout<<"Enter the price of the vehicle: ";
  cin>>price;
  cout<<"Enter the vehicle type code: ";
  cin>>c;
  t = per(c);
  tp = final(price , t);
  fp = tp + price;
  name = type(c);
  cout<<"The final price on a vehicle of type "<<name<<" after adding the tax is "<<fp;  
}
int per(char c)
{
 int tax;
  if(c == 'M')
  {
   tax = 6;
  }
 if(c == 'E')
  {
   tax = 8;
  }
 if(c == 'S')
  {
   tax = 10;
  }
 if(c == 'V')
  {
   tax = 12;
  }
 if(c == 'T')
  {
   tax = 15;
  }
 return tax;
}
float final(float p , float t)
{
  float f,a;
  a = (t/100);
  f = p * a;
  return f;
}
string type(char ch)
{
 string name;
  if(ch == 'M')
  {
   name = "Motorcycle";
  }
  if(ch == 'E' )
  {
   name = "Electric";
  }
  if(ch == 'S' )
  {
   name = "Sedan";
  }
  if(ch == 'V')
  {
   name = "Van";
  }
  if(ch == 'T')
  {
   name = "Truck";
  }
 return name;
}