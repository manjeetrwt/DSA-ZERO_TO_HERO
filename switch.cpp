//MINI CALCI USING SWITCH CASE,BREAK//
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first num \n";
    cin>>a;
    cout<<"enter the Second num \n";
    cin>>b;
    cout<<"enter 1 for add\n enter 2 for subtract \n enter 3 for multiplication \n 4 for division";
    int choice;
    cout<<"Enter your choice according to the menu \n";
    cin>>choice;
    switch(choice){
        case 1:cout<<"the addition if :"<<a+b;
                break;
        case 2:cout<<"the subtraction is : "<<a-b;
                break;    
        case 3:cout<<"the multiplication is :"<<a*b;
                break;
        case 4:if(b>a){
            cout<<"den cant be greather than num";
        }
                cout<<"the div is :"<<a/b;
        default:cout<<"might be invalid inputs";

    }


   //USE OF CONTINUE KEYWORD IN A LOOP
    for(int i=0;i<5;i++){
        if(i==3){
            continue;
        }
        cout<<i<<endl;

    }

}