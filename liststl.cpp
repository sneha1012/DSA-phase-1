#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;
   

    list<int> n(5,100); //initializing it with 100 ,num of elements 5
    cout<<"printing n"<<endl;
     for(int i:n){
        cout<<i<<" ";
     }cout<<endl;


    l.push_back(1);
    l.push_front(2); //o(n) time complexity remains the same


    for(int i:l){
        cout<<i<<" ";
    }


     cout<<endl;
     l.erase(l.begin());
     cout<<"after erase"<<endl;
     for(int i:l){
        cout<<i<<" ";
     }

     cout<<"size of list"<<l.size()<<endl;


}

//trying out different operations on stl list.