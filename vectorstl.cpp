  #include<iostream>
  #include<vector> //to include vector lib
  using namespace std;
  
  int main(){

    vector<int> v; //defining the vector 
    cout<<"capacity "<<v.capacity()<<endl; //checking the capacity of the vector

    v.push_back(1); //pushing an element in the created vector
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(2); 
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(3); 
    cout<<"capacity"<<v.capacity()<<endl; //doubles the capacity of itself thus doesn't show 3 but shows 4 when asked for the capacity

    cout<<"size"<<v.size()<<endl; //size remains 3, only doubles the earlier capacity

    cout<<"element at 2"<<v.at(2)<<endl;
    //index 2 element

    cout<<"front"<< v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back(); // poping the las element out

    cout<<"after pop"<<endl;
    for(int i:v)  {
        cout<<i<<" ";
    }

    cout<<"before clear size"<< v.size()<<endl;
    v.clear();

    cout<<"after clear size"<< v.size()<<endl;


 // time complexity Big O(1); we can access in comnstant time.



  }