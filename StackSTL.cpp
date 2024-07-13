#include<iostream>
#include<stack>  //stack

using namespace std;
int main(){
    stack<string> s;

    s.push("manjeet");
    s.push("rawat");

    //printing the top elmnt
    cout<<"the top elmnt is: "<<s.top();

    //poping out the top elemnt
    s.pop();
    cout<<"after poping new top is :"<<s.top();

    //size
    cout<<"the size is :"<<s.size();

    //empty check
    cout<<"emp or not in bool :"<<s.empty();
    









































}