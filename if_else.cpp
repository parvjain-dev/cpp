
#include <iostream>

using namespace std;
int main(){
 char ch ;

 cout<<"Enter character for checking"<<endl;
 cin>>ch;
 int a = int(ch);
  //ch = cin.get();
 //cout<<"the char which is cheking is "<<ch<<endl;
 cout<<"The ASCII representation is :"<<a<<endl;
 if(a >=97 && a<=122 ){
     cout<<"This is lower case"<<endl;
 }else if(a>=65 && a<=90){
    cout<<"This is upper case"<<endl;
 }
 else if(a>=48 && a<=57){
     cout<<"This numeric value"<<endl;
 }
}
