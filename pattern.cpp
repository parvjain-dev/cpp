#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of row and col" << endl;
    cin >> n;
    //     int num = 1;
    //         for (int  i = 1; i <= n; i++)
    //         {
    //              for (int j = 1; j <= n; j++)
    //              {
    //           //      cout<<j<<" ";
    // //                  1 2 3 4 5
    // //                  1 2 3 4 5
    // //                  1 2 3 4 5
    // //                  1 2 3 4 5
    // //                  1 2 3 4 5

    //           //     cout<<n-j+1<<" ";  //For reversing 5,4,3,2,1
    // //                 5 4 3 2 1
    // //                 5 4 3 2 1
    // //                 5 4 3 2 1
    // //                 5 4 3 2 1
    // //                 5 4 3 2 1

    //         //         cout<<num<<" ";
    //         //         num++;

    // //                  1 2 3
    // //                  4 5 6
    // //                  7 8 9

    //              }
    //              cout<<endl;

    //         }

    //  int num=1;

    //         for ( int i = 1; i <= n; i++)
    //         {
    //             for (int  j = 1; j <=i; j++)
    //             {
    //    //           cout<<"*"<<" ";
    // //               *
    // //               * *
    // //               * * *
    // //               * * * *

    //        //         cout<<i<<" ";
    // //                 1
    // //                 2 2
    // //                 3 3 3
    // //                 4 4 4 4

    //                 // cout<<num<<" ";
    //                 // num++;
    // //                 1
    // //                 2 3
    // //                 4 5 6
    // //                 7 8 9 10
    //             }
    //               cout<<endl;

    //         }

    //         for (int  i = 1; i <= n; i++)
    //         {
    //                // int num = i;
    //             for (int  j = 1; j <= i; j++)
    //             {
    //                 // cout<<num<<" ";
    //                 // num++;
    // //                 1
    // //                 2 3
    // //                 3 4 5
    // //                 4 5 6 7

    //              //ANOTHER WAY
    //                cout<<i+j-1<<" ";
    //             }
    //             cout<<endl;

    //         }

    // for (int  i = 1; i <= n; i++)
    // {
    //     for (int  j = 1; j <= i; j++)
    //     {
    //        // int val = i-j+1;
    //        // cout<<val<<" ";
    //        //val++;

    //        cout<<i-j+1<<" ";
    //     }
    //     cout<<endl;

    // }


    char ch = 'A' ;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)

        {
            // char ch1 = ch+i-1;
            // cout<<ch1<<" ";
//            @ @ @ @ 
//            A A A A 
//            B B B B 
//            C C C C 


            // cout << ch << " ";
            // ch++;
//             A B C D    
//             E F G H    
//             I J K L    
//             M N O P  

             
             char ch2='A'+i+j-2;
              cout<<ch2<<" ";
//              ? @ A B    
//              @ A B C    
//              A B C D    
//              B C D E  
        }
        cout << endl;
    }
}