#include<iostream>
#include<array>

using namespace std;
int main(){
    int basic[3]={1,3,4}; //normal array
    
    array<int,4> a ={1,2,3,4};
    //to find size
    int size=a.size();
    cout<<"the size of STL array is :"<<size<<endl;
    //access elements
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;

    }

    //access by index using at(x)
    cout<<"the elemnt at second index is :"<<a.at(2)<<endl;

    //to check the array is empty or not it returns bool
    cout<<"it check emp or not !"<<a.empty()<<endl;

    //to access first element (front)op
    cout<<"the first elemnt is :"<<a.front()<<endl;

    //to access last elemnt using (back)op.
    cout<<"the last element is :"<<a.back()<<endl;
    



}