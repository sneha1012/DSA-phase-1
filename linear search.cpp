#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){

  for(int i=0; i<size; i++){
    if(arr[i]== key){
      return 1;
    }
  }
  return 0;
}

int main(){

  int arr[]= {5, 10, -1, 3, 5, 6, 7, 8, 9, 0};

  // whether 1 or not?
  cout<<"enter the key"<<endl;
  int key;
  cin>>key;

  bool found= search(arr, 10, key);

  if(found){
    cout<<"key is present"<< endl;
    
  }
  else{

    cout<<"key is not found"<< endl;
  }
    

  return 0;
}