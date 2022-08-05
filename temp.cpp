#include<iostream>
#include<string>
#include <vector>
using namespace std;
int main(){ 
// char arr[10][5] = {"", "", "abc", "def", "efg", "hij", "lmno", "pqrs", "tuv", "xyz"};
// string arr[10] = {"", "", "abc", "def", "efg", "hij", "lmno", "pqrs", "tuv", "xyz"};
// cout<<arr[5]<<endl;

vector<string> strs ;
strs.push_back("flower");
strs.push_back("fly");
strs.push_back("flight");

// for (int i = 0; i < strs.size(); i++)
// {
//    //cout<<strs[i]<<endl;
//    for (int j = 0; j < strs[i].size(); j++)
//    {
//       cout<<strs[i][j]<<" "<<endl;
//    }
  
// }
double a = 12;
double c = 5;

double d = double(a/c);
cout<<d<<endl;
return 0;
}