#include<iostream>
using namespace std;

int linearSearch(int arr[] , int size , int ele ){
    int res;
    for ( int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            res = i+1;
            
        }
        
    }
    return res;
    
}

int main(){

   int arr[5] = {1,3,5,7,9};
   int res = linearSearch(arr,5,7);
   cout<<"The index of the element is "<<res<<endl;
return 0;
}