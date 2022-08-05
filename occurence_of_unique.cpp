#include<iostream>
using namespace std;

void uniqueocc(int arr[],int size){
    int i ,j;
    int count;
int arr1[10] ;
   for ( i = 0; i < size; i++)
         
   {
       for ( j = 0; j < size;j++)
       {
            if (arr[i] == arr[j])
            {
                count++;
                for (int k = 0; k<10; k++)
                {
                     arr1[k] = count;
                }
                
            }
            
             
       }
       
   }
   for (int l = 0; l <10; l++)
   {
       cout<<arr1[l];
   }
   
    
}
int main(){
int arr[6] ={1,2,2,1,1,3};
uniqueocc(arr,6);

return 0;
}