#include<iostream>
using namespace std;

int main(){
cout<<"Enter n\n";
int n;
cin>>n;

//REMEMBER WHERE ARE YOU INITIALIZING THAT CHAR VARIABLE IT ALSO DEPENDS ON THE OUPTPUT
//          char ch ='A';
// for (int i = 1; i <= n; i++)
// {
//     for (int  j = 1; j <= i; j++)
//     {
//         // char ch1 = ch+i-1;
//         // cout<<ch1<<" ";
// //      a
// //      b b        
// //      c c c      
// //      d d d d  

//     //  cout<<ch<<" ";
//     //  ch++;
     

//     //  char ch2=ch+i+j-2;
//     //  cout<<ch2<<" ";

// //      A
// //      B C        
// //      C D E      
// //      D E F G 
//     }
//     cout<<endl;
    
// }



char ch ='A';
// for (int  i = 1; i <= n; i++)
// {
//        char ch2=ch+n-i;
//     for (int  j = 1; j <=i; j++)
//     {
//          cout<<ch2<<" ";
//          ch2++;
// //          D
// //          C D        
// //          B C D      
// //          A B C D 
//     }
//     cout<<endl;
    
// }




//  for (int  i = 1; i <= n; i++)
// {
//        char ch2=ch+i-1;
//     for (int  j = 1; j <=n; j++)
//     {
//          cout<<ch2<<" ";
//          ch2++;
//     }
//     cout<<endl;
    
// }

// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= n-i; j++)
//     {
        
//         cout<<" ";
      
//     }
    
//     for (int k = 1; k <= i; k++)
//     {
//         cout<<"*";        
//     }
    
//     cout<<endl;
// }



// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= i-1; j++)
//     {
        
//         cout<<" ";
      
//     }
    
//     for (int k = 1; k <= n-i+1; k++)
//     {
//         cout<<"*";        
//     }
    
//     cout<<endl;
// }


// int num1;
for (int i = 1; i <= n; i++)
 
{
int num =1;
    for (int j = 1; j <= n-i; j++)
    {
        
        cout<<" ";
      
    }
    
    for (int k = 1; k <= i; k++)
    {
        cout<<num;
        num++;        
    }
    
    int start = i-1;
    for (int l = 1; l < i; l++)
    {
      cout<<start;
      start--;
    }
    
//        1       
//       121      
//      12321     
//     1234321
    cout<<endl;
 }




       


}