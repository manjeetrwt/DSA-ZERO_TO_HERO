#include<iostream>
#include<list>  //list

using namespace std;
int main(){
    list<int> l;
    list<int> nl(l);   //to create a copy of l list
    list<int> nll(5,1); //initialize a new list and with its known size

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";

    }

    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"the size of this list is"<<l.size();
























}