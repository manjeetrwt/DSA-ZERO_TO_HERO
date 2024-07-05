//bitwise operators and decimal number system
#include<iostream>
using namespace std;

int main(){  
    //bitwise operators
   /* int a=2;
    int b=4;

    cout<<"the a & b is:"<< (a&b)<<endl;
    cout<<"the a | b is:"<< (a|b)<<endl;
    cout<<"the a ~ b is:"<< (~b)<<endl;
    cout<<"the a ^ b is:"<< (a^b)<<endl;

    //left and right shift operators
    cout<<"using left shift: "<<(5<<1)<<endl;
    cout<<"using right shift: "<<(15>>1)<<endl; 

    //increment and decrement (pre and post)
    int i=4;
    int b=i++;
    cout<<"post inc : "<<b<<endl;
    cout<<"here in : "<<i<<endl;

    int ii=11;
    int bb=++i;
    cout<<"pre inc : "<<bb<<endl;
    cout<<"here i : "<<ii<<endl;

    int iiii=4;
    int bbbb=i--;
    cout<<"post dec :"<<bbbb;
    cout<<"here i"<<iiii<<endl;

    int iii=11;
    int bbb=--i;
    cout<<"pre dec : "<<bbb<<endl;
    cout<<"here i : "<<iii<<endl;

    //try inc and dec
    int x=7;
    cout<<(++x)<<endl;
    cout<<(x++)<<endl;
    cout<<(x--)<<endl;
    cout<<(--x)<<endl;

    int s,d=1;
    s=10;
    if(++s){
        cout<<d;

    }
    else{
        cout<<++d;
    }
    
    //counting 1 to n using for loop 
    int count;
    cout<<"enter the number u wanna print counting"<<endl;
    cin>>count;
    for(int i=1;i<=count;i++){
        cout<<i<<endl;
    } 
    

    // sum of 1 to n number
    int v;
    cin>>v;
    int sum=0;
    for(int i=1;i<=v;i++){
        sum+=i;
    }
    cout<<"thhe sum is :"<<sum; 
    */
   

   //FIBONACCI SERIES
   /* int n;
   int a=0;
   int b=1;
   cout<<a<<" "<<b<<" ";
   for(int i=0;i<=n;i++){
    int fibnext = a+b;
    cout<<fibnext;

    a=b;
    b=fibnext; 

   } */

/*
  //CHECK PRIME
  int n;
  cout<<"enter the num";
  cin>>n;
  int count=1;
  for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"its not a prime";
        count=0;
        break;
        }

    }
    if(count==0){
        cout<<"not a prime number";
    }
    else{
        cout<<"prime";
    }
    */



    //continue
   /* for(int i=0;i<5;i++){
        cout<<"hey"<<endl;
        cout<<"hi"<<endl;
        continue;  //futher statement will unreachable and for loop will execute until cond. satisfy
        cout<<"letss see if it executes or not";
        }   */



       //checking scope of variables in block and globally
       int b=5;
       cout<<b<<endl;
       if(true){
        int b=3;
        cout<<b<<endl;
        if(true){
            int b=6;
            cout<<b<<endl;
        }
       }



      }