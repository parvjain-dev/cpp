#include<iostream>
using namespace std;
int main(){
int array[10] ={1};
int arrSize = sizeof(array)/sizeof(int);
// int arrsize1 = sizeof(array);
// int arrsize2 = sizeof(array[0]);
// for(int i=0; i<=arrSize-1; i++){
//     cout<<array[i]<<endl;
// }
// cout<<arrsize1<<endl;
// cout<<arrsize2<<endl;



//filling or intisializing array with any value
int arr[10];
fill_n(arr,10,23);  //By this code all the values of the array will get initialized by 23 

for (int i = 0; i <= 9; i++)
{
    cout<<arr[i]<<endl;
}

return 0;
}