#include<iostream>
using namespace std;

int i;
int getMin(int num[], int n ){

    int min = INT_MAX;//  max value stored in int max 
    

    for(int i= 0; i<=n; i++){
         if(num[i]< min){
            min= num[i];
         }
}

return min;
} 
int getMax(int num[], int n ){

    int max = INT_MIN;// min value stored in int min 
    

    for(int i= 0; i<=n; i++){
         if(num[i]> max){
            max= num[i];
         }
}

return max;
} 
int main(){

     int size;
     cin>> size;

     int num[100];

     //taking input in an array

     for(i=0; i<size; i++){
        cin>> num[i];
     }

     cout<<" maximum value is"<< getMax(num, size)<<endl;
     cout<<" minimum value is"<< getMin(num, size)<< endl;


     return 0; 


}