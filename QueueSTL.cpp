#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<int> q;
    q.push(2);
    q.push(3);

    cout<<"the top element is :"<<q.front()<<endl;
    cout<<"emp or not !:"<<q.empty();

    int sz=q.size();
    cout<<"before poping :"<<sz<<endl;

    cout<<"the last inserted elmnt is :"<<q.back()<<endl;

    q.pop();

    int sz1=q.size();
    cout<<"after the poping out :"<<sz1<<"endl";










}