#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;
    m[1]="manjeet";
    m[2]="rawat";

    m.insert({5,"mrx"});

    cout<<"bef erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding-2"<<m.count(-2)<<endl;

    //m.erase(13);
    cout<<"after erase";

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    auto it = m.find(1);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }


    }