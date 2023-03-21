#include<iostream>
#include<deque>

using namespace std;
int main(){

    deque<int> d; // dec created 

d.push_back(1); //pushing elements in the deque 
d.push_front(2);

// first element is 2 and last is 1 
cout<<endl;

cout<<"element at 1 index"<<d.at(1)<<endl;
cout<<"front"<<d.front()<<endl;
cout<<"back"<<d.back()<<endl;

cout<<"empty or not"<<d.empty()<<endl; // gives zero 0
cout<<"before erase"<<d.size()<<endl;

d.erase(d.begin(), d.begin()+1);
cout<<"after erase"<<d.size()<<endl;

for(int i:d){
    cout<<i<<endl; // basically to see what all is left after the operation in the deque
}
    




    //deque 



}