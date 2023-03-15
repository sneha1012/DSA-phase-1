#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<< endl;
}
void  swapalternate(int arr[], int size){

    for(int i =0; i<size; i+=2){
        if(i+1 < size){  // we re checking if the index lies inside the length of an array
            swap(arr[i], arr[i+1]);
        }

    }
}

int main(){

    int even[8]= {5,2,9,4,7,6,1,0};
    int odd[5] =  {11, 33, 9, 76, 43};

    swapalternate(even, 8);
    printArray(even, 8);


    cout<< endl;

    swapalternate(odd, 5);
    printArray(odd, 5);

    return 0;
}