#include<iostream>

using namespace std;

int main(){

  //datatypes
  int a=3;
  cout<<a<<endl;

  float b=1.2;
  cout<<b<<endl;

  char c='a';
  cout<<c<<endl;

  bool d=true;
  cout<<d<<endl;

  double e=1.23;
  cout<<e<<endl;

  //to check size of any datatype,variable
  int size=sizeof(a);
  cout<<"the size of a is :"<<size<<endl;

  //typecasting
  int p='b';
  cout<<p<<endl;
  
  //signed is by default and unsigned which stores only positive values
  unsigned int x=-112;
  cout<<x<<endl;

  //operators
  float div=2.0/5;
  cout<<div<<endl;
  
  //operators relational,logical,bitwise,arithmetic
  //relational
  int x1=2;
  int x2=2;
  bool check=(x1==x2);
  cout<<check<<endl; 
}