#include<iostream>

using namespace std;

int main(){
    int n;   //256 
    int last;
    int remain;
    cout<<"Enter your number"<<endl;
    cin>>n;
    int sum = 0;
    int mul = 1;

    for(int i  =0; i<=n ; i++)
    {
       last = n%10;
        sum = sum + last;
        mul = mul * last;
         n= n/10;
    }
    // cout<<last;
    // cout<<endl;
    // cout<<remain;
    cout<< "sum = "<< sum <<endl;
    cout<< "product = "<< mul <<endl;
    cout<<"result = "<<mul-sum<<endl;
    return 0;
}