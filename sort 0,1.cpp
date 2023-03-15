#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";

    }
    cout<< endl;
}

void sortOne(int arr[], int n){

    int left= 0, right = n-1;
    int step;


    while(left <= right){
        cout<< "step"<< step++<< endl;
        printArray(arr, n);
        cout<<endl;

        while(arr[left]== 0 && left<right){
            left++;
        }
        while(arr[right]== 1){
            right--;
        }
        // when you reach here , arr[i]==1 and arr[j== 0]
        if(left< right){
            swap(arr[left], arr[right]);
        left++;
        right--;
        break;

        }
        

        
    }
}

int main(){

    int arr[8]= {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    cout<<" printing after function call"<< endl;
    printArray(arr, 8);

    








    return 0;
}