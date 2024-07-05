#include <iostream>

using namespace std;
int main() {
  //checking number is positive or negative or zero using if else condiotional statement
  int n;
  cin>>n;
  if(n>0){
    cout<<"positive"; //done by if-elseif-else statement
  }
  else if(n<0){
    cout<<"negative";
  }
  else{
    cout<<"zero";
  }

  int a,b;
  cin>>a>>b; //taking input from user
  int x;
  x=cin.get();
  cout<<"value of x is:"<<x<<endl; //49 value


  //while looping print sum 1 to input number
  int i=1;
  int n1,sum=0;
  cin>>n1;
  while(i<=n1){
    cout<<i<<" ";
    sum+=i;
    i++;
  }
  cout<<"the sum is :"<<sum<<endl;

  //checking prime number
  int n2=5,i2=2;
  while(i<n2){
    if(n2%2==0){
      cout<<"not a prime";
      
    }
    else{
      cout<<"prime for"<<i2<<endl;
    }
    i++;
  }

  
}