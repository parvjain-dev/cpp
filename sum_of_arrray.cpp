#include<iostream>
using namespace std;
int sum(int arr[], int size){
    int result =0;
    for (int i = 0; i < size; i++)
    {
        result+=arr[i];
    }
    return result;
    
}

int main(){
    int arr[5] = {2,4,6,8,10};
int res =sum(arr, 5);;
cout<<res<<endl;

return 0;
}