#include<iostream>
#include<vector>  //vector create double array by itself and copy all elements and dump the old array

using namespace std;
int main(){
    vector<int>v;
    cout<<"size-->"<<v.capacity()<<endl;

    //inserting element
    v.push_back(1);
    cout<<"capacity-->"<<v.capacity()<<endl;

    //inserting element
    v.push_back(6);
    cout<<"capacity-->"<<v.capacity()<<endl;

    //inserting element
    v.push_back(8);
    cout<<"capacity-->"<<v.capacity()<<endl;//here we can see that the size is doubled by itself when vector is fully filled

    //inserting element
    v.push_back(10);
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size();
    //access by index
    cout<<"the element at 2nd index"<<v.at(2)<<endl;
    //front and back
    cout<<"the first elemnt is :"<<v.front()<<endl;

    //to access last elemnt using (back)op.
    cout<<"the last element is :"<<v.back()<<endl;
    

    //poping the last element
    v.pop_back();
    cout<<"after poping out\n";
    for(int i:v){ 
        cout<<i<<" "; //after poping out
    }
}