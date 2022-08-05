#include<iostream>
using namespace std;

void printarr(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
     cout<<" "<<arr[i]<<" ";
    }
    
}
void alterswap(int arr[], int size){
int p = 0; 
int q = p+1;
while (q<size)
{
 swap(arr[p], arr[q]);
 p = p+2;
 q= q+2;

 
}
printarr(arr,size);
}

int main(){
int arr[6] = {1,2,3,4,5,6};
alterswap(arr, 6);
cout<<endl;
int arr1[5] = {1,2,3,4,5};
alterswap(arr1, 5);
return 0;
}