#include <iostream>
#include <vector>


using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0; i< n-1; i++){
        int minIndex= i;

        for(int j = i+1; j<n; j++){ // loop for finding the minimum 
            if(arr[j] < arr[minIndex])
            {
                minIndex = j; // min index updated 
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}