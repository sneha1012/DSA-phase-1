#include<iostream>
#include<queue>

using namespace std;
int main(){

    queue<string> q;

    q.push("sneha");
    q.push("arti");
    q.push("maurya");

    cout<<"size before pop "<<q.size()<<endl;

    cout<<"first element"<<q.front()<<endl;
    q.pop();
    cout<<"first element"<< q.front()<<endl;
    cout<<"size after popl "<<q.size()<<endl;


}