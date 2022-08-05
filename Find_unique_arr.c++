
#include<iostream>
using namespace std;


void unique(int arr[] , int size){
   int res =0;
   int i;
   for (i = 0; i < size; i++)
   {
         res = res ^ arr[i];

   }
   if (res ==0 || size ==2)
   {
      cout<<"False"<<res<<endl;   
   }
   else if (arr[i]<0)
   {
       cout<<"False"<<res<<endl;
   } 
   else{
       cout<<"True"<<res<<endl;
   }
    
} 
 
int main(){
// int arr[7] = {1,2,3,3,4,2,1};
// int res = unique(arr,7);

int arr[4] = {2,2,2,2}; //Expected false but output true

unique(arr,4);

return 0;
}

