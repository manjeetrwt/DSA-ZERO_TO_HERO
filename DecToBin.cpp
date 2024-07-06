#include<iostream>
#include<math.h>
using namespace std;
int main(){
    /* int n;
    int ans=0;
    int i=0;
    cout<<"enter the number here";
    cin>>n;
    while ( n != 0){
        int bit = n&1;
        ans = (bit * pow(10,i) )+ ans;

        n=n>>1;
        i++;

    }
    cout<<ans; */


    //reverse BinToDec 
    int m;
    cout<<"enter the num here :";
    cin>>m;
    int ii=0;
    int anss=0;
    while (m!=0){
        int dig = m%10;
        if(dig==1){
            anss=anss + pow(2,ii);

        }
        m=m/10;   /*incase of digit we do n%10 and n/10 and incase of bit we preform n&1 then n>>1; */
        ii++;

    }
     cout<<"the ans is : "<<anss;
}