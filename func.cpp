#include<iostream>
using namespace std;

int power(int a , int b){
    int ans =1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans*a;
    }
    return ans;
}
// 1--> EVEN 
// 0--> odd

// Returning 0 means false'
//returning 1 means true
bool isEven(int a){
    if (a%1)
    {
        //if odd then returning 0
        return 0;
    }
    else{
        return 1;
    }
}
 
 int factorial(int n){
     int ans =1;
     if (n==1)
     {
         return 1;
     }else{
         for (int i = n; i >= 1; i--)
         {
             ans= ans*i;
         }
         return ans;
         
     }
     
 }
int ncr(int n , int r){
   
    int ans = ((factorial(n)) / ((factorial(r)) *(factorial(n-r))));
    return ans;
   
}

bool isprime(int n){
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0) 
        {
            return 0;
        }
        
    }
    return 1;
}
int main(){
 
// //  cout<<power(2,3)<<endl;
// if (isEven(12))
// {
//     cout<<"Even"<<endl;
// }
// else{
//     cout<<"odd"<<endl;
// }


// cout<<factorial(0)<<endl;
// cout<<ncr(8,5)<<endl;

if (isprime(7))
{
    cout<<"is prime";
}
else{
    cout<<"not prime";
}

return 0;
}