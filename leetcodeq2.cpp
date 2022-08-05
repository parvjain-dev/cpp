#include<iostream>
using namespace std;
int main(){
    int  n ;
    cout<<"Enter binary number "<<endl;
    cin>>n;
    int count = 0;
    
     for(int i =0; i<= n; i++){
          if(n&1){        //if last bit == 1 then right shift
              count++;
          }
          n= n>>1;
          return count;
     }
     cout<<"total ones are= "<<count;
return count;
}