#include<iostream>
using namespace std;
int main(){
int n= 123;
int ans = 0;
int digit =1;
while(n!=0){
    ans = (ans*10)+digit;
    n=n>>1;
    digit++;
    
}
cout<<ans;
return 0;
}