#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }

    //POPPING OUT FROM FRONT
    /* d.pop_front();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    } */
   
   //print front and back elmnt
   cout<<"front-->"<<d.front()<<" ";

   cout<<"back-->"<<d.back()<<" ";

   //checking empty or not  by bool
   cout<<"emp or not"<<d.empty()<<" ";

   //before erase
   cout<<"brfore er"<<d.size()<<" ";
   d.erase(d.begin(),d.begin()+1);
   cout<<"aftr er"<<d.size()<<" "; //after erase
   for(int i:d){
    cout<<i<<" ";
   }








}