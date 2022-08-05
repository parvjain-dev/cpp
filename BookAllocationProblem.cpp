#include<iostream>
using namespace std;

bool ispossible(int arr[] , int n , int m , int mid){ //N is number of books , M is number of students
    int studentcount =1;
    int pagesum =0;
    for (int i = 0; i <n; i++)
    {
        
        if (pagesum + arr[i] <= mid)
        {
            pagesum+=arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount>m || arr[i] >mid )
            {
               return false;
            }
            pagesum = arr[i];
        }   
    }
                    return true;   

}
int allocatebook ( int arr[] , int n , int m ){ //N is number of books , M is number of students
       int s = 0;
       int sum =0;
       int ans =-1;
       for (int i = 0; i < n; i++)
       {
           sum+=arr[i];
       }
       int e = sum ;
       int mid = (s+e)/2;
       while (s<=e){
           if (ispossible( arr ,  n ,  m ,  mid))
           {
              ans = mid;
              e = mid -1; 
           }
           else{
               s = mid +1;

           }
       }
       return ans;
}

int main(){
int arr[4] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(int);

int m = 2;
int res = allocatebook(arr,n,m);
cout<<res<<endl;
return 0;
}