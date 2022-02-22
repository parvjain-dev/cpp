#include<iostream>

using namespace std;

int main(){
// int a = 1 ;
// int  b = 2;
// if (a-- > 0 && ++b > 2)
// {
//     cout<<"In if"<<endl;
// }
// else{
//     cout<<"in else"<<endl;
// }
// cout<<a <<" "<<b<<endl;


// int c = 1;
// int d = c++;
// int e = ++c;
// cout<<d<<endl<<e<<endl;

cout<<"Enter the number"<<endl;
int n;
cin>>n;

int a =0;
int b= 1;
cout <<a<<" "<<b<< " ";

for (int i = 2; i <= n; i++)
{
  
   int sum = a+b;
   a=b;
   b= sum;
    cout<<sum<<" ";
}



}
