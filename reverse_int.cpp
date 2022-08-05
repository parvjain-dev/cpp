#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n ;
cin>>n;

int ans =0;

while (n!=0)
{
    if (INT_MIN <n && INT_MAX>n )
    {
        int digit= n%10;
   ans = (ans * 10 ) +digit;
    
    n= n/10;
    }
    else
    {
        return 0; 
    }
    
  

}
cout<<ans;

return 0;
}