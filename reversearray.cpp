#include<iostream>
using namespace std;

// void swap(int i , int j){
//     int temp =i;
//     i =j;
//     j=temp;
// }
void printarr(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
     cout<<" "<<arr[i]<<" ";
    }
    
}
void reversearr(int arr[] , int size){
     int start =0;
     int end =size-1;
     while (start<=end)
     {
         swap(arr[start], arr[end]);
         start++;
         end--;
     }
     printarr(arr,size);
     
   
   
}

int main(){
   int arr[4] = {2,7,5,9};
    reversearr(arr,4);
 
return 0;
}