#include <iostream>
using namespace std;
int main()
{
    //  int a = 9;
    //  char ch []  = {'a','b','f'};
    //cout<ch<<endl;
    //  for (int i =0 ; i<=a ; i++){
    //      cout<<i<<endl;
    //  }ṇ

    //Sum of x
    // int x;
    //  int sum =0;
    // // cout << "Enter number till which you want sum :" << endl;
    //  cout << "Check weather the number is prime or not :" << endl;
 
    // cin >> x;

    // while(x>=0){
    //     sum = sum+x;
    //     x--;
    // }
    // cout << "Your sum is :" << sum << endl;

    //sum of all even number

    // while (i<=x)
    // {
    //  sum = sum + i ;
    //  i= i+2;
    // }

// cout << "Your sum is :" << sum << endl;

//checking weather the number is prime or not
  
    // for (int   i = 2; i < x; i++)
    // {  
    //        if (x==0 || x==1)
    //        {
    //           cout<<"Number is not prime "<<endl;
    //           break;
            
    //        }else if(x%i ==0){
    //            cout<<"Number is not prime"<<endl;
    //            break;
    //        }else{
    //            cout<<"Number is Prime"<<endl;
    //            break;
    //        }
           
           
    // }
    

    int x;
    // cout << "Enter number till which you want sum :" << endl;
     cout << "number of rows for star :" << endl;
 
    cin >> x;
     int number = 1;
     for (int i = 1; i <= x; i++)
     {
          
         for (int  j = 1; j <=x; j++)
         {
             cout<<number<<" ";
                    number = number +1;
         }
         number = number +1;
         cout<<endl;
         
     }
     
}