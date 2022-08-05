#include<vector>
#include<iostream>
using namespace std;

void saydigit(int n , vector<string>& vs ){
   
    if (n==0)
    {
        return;
    }
    
    
        
    int ans = n%10;
    n=n/10;
     
    saydigit(n,vs);
    cout<<vs.at(ans) <<" ";
       
     
}

int main(){
 vector<string> vs;
    vs.push_back("zero");
    vs.push_back("one");
    vs.push_back("two");
    vs.push_back("three");
    vs.push_back("four");
    vs.push_back("five");
    vs.push_back("six");
    vs.push_back("seven");
    vs.push_back("eight");
    vs.push_back("nine");

int n ;
cout<<"Enter the number"<<endl;
cin>>n;

saydigit(n,vs);
return 0;
}