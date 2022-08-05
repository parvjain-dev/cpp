#include<iostream>
using namespace std;

int firstocc (int arr[] , int start, int end , int key){
    int mid = start+ (end -start)/2;
    int ans;
    while (start <= end)
    {
        

        if (key == arr[mid])
        {
          
           ans = mid ;
           end = mid -1;
        }
      
        if (key > arr[mid])
        {
            start = mid+1;
                  
        }
        else
            {
        
               end=mid-1;
                
            }
           mid = start+ (end -start)/2;
   
    }
               

            return ans;
        

}

int lastocc (int arr[] , int start, int end , int key){
    int mid = start+ (end -start)/2;
    int ans;
    while (start <= end)
    {
        

        if (key == arr[mid])
        {
          
           ans = mid ;
          start = mid+1;
        }
        else if (key > arr[mid])
        {
            start = mid+1;
                  
        }
        else
            {
        
                end=mid-1;
               
            }
           mid = start+ (end -start)/2;
   
    }
            return ans;

}


int main(){
int arr[6] = {1,2,2,3,3,5};
 int size = sizeof(arr)/sizeof(int);
    int start = 0;
    // int res1 = firstocc(arr,start,size,1); //3
    int res = lastocc(arr,start,size,3);   //4
    // cout<<"First occurence - "<<res1 <<endl;
    cout<<"Last occurence - "<<res;
return 0;
}