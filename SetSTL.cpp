#include<iostream>
#include<set>

using namespace std;
int main(){

    set<int> s;
    s.insert(5);
    s.insert(55);
    s.insert(54);
    s.insert(1);
    s.insert(45);
    s.insert(58);


    for(int i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;

    s.erase;
    for(auto i : s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<s.count(-5)<<endl;
    set<int>::iterator itr = s.find(45);

    for(auto it=itr!=s.end();it++){
        cout<<it<<" ";
    }cout<<endl;

    }






}