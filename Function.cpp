#include<iostream>
#include<math.h>
using namespace std;


//FUNCTION FOR POWER OF A NUM
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
 }
int main(){
    //without function using power of num
    /* int ans;
    int a,b;
    cout<<"enter the number";//
    cin>>a;
    cout<<"enter the power";
    cin>>b;
    ans=pow (a,b);
    cout<<ans;
 */
    int a,b;
    cout<<"enter the num1\n";
    cin>>a;
    cout<<"enter the num2 \n";
    cin>>b;
    int answer=power(a,b);
    cout<<answer;
}