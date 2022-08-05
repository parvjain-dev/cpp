#include <iostream>
using namespace std;
int main()
{
    // int num;
    // cin >> num;

    // char ch = 'a';
    // switch(ch)
    // {
    //     case 1:
    //     cout<<"parv";
    //      break;
    //     case 'a':
    //         switch (num) {
    //             case 12:
    //             cout<<"nested switch";
    //             break;
    //         }
    //   break;
    //     case 3:
    //     cout<<"shyam";

    //       case 'b':
    //       cout<<"parv";
    //    break;

    //     default :
    //     cout<<"ryan";
    // }

    // int n = 1;
    // while (n)
    // {
    //     switch (num)
    //     {
    //     case 12:
    //         cout << "12";
    //         break;
    //         exit(0);
    //     case 13:
    //         n = 0;
    //         break;
    //     default:
    //         break;
    //     }
    // }




//mini calc using switch case
//     int a ,b;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     cout<<endl;
//       cout<<"Enter the value of B : ";
//     cin>>b;
//  cout<<endl;

//  cout<<"1. for +"<<endl;
//  cout<<"2. for -"<<endl;
//  cout<<"3. for *"<<endl;
//  cout<<"4. for %"<<endl;

//  int num;
//  cin>>num;

//  switch (num)
//  {
//  case 1:
//      cout<<a+b<<endl;
//      break;
//  case 2:
//      cout<<a-b<<endl;
//      break;
//  case 3:
//      cout<<a*b<<endl;
//      break;
//  case 4:
//      cout<<a%b<<endl;
//      break;
 
//  default:
//      cout<<"Not valid Case";
//      break;
//  }




//Calc number of notes

int amount ;

int n =1;

while (n)
{
    cout<<"Enter the amount for which you want to find out"<<endl;
cin>>amount;
cout<<endl;
 cout<<"1. for 100rs notes"<<endl;
 cout<<"2. for 50rs notes"<<endl;
 cout<<"3. for 20rs notes"<<endl;
 cout<<"4. for 1rs notes"<<endl;
 cout<<"5. for exit"<<endl;

 int num;
 cin>>num;
 switch (num)
 {
 case 1:
     cout<<amount/100<<endl;
     break;
 case 2:
     cout<<amount/50<<endl;
     break;
 case 3:
     cout<<amount/20<<endl;
     break;
 case 4:
     cout<<amount/1<<endl;
     break;
 case 5:
     n=0;
     break;
 default:
     cout<<"Not valid Case";
     break;
 }
}


    return 0;
}
