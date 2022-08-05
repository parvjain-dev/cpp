#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void reverseAfterpos(vector<int>& v, int m ){
// //   vector<int> ::iterator itstart = v.begin()+m;
// //   vector<int> ::iterator itend = v.end();
 
// int start =0+m;
// int end = v.size()-1;
//   while (start <= end)
// {
//     swap( v[start],v[end]);
//      start++;
//     end--;
// }

// }
void reverseAfterpos(vector<int>& v, int m ){
  vector<int> ::iterator itstart = v.begin()+m;
   vector<int> ::iterator itend = v.end()-1;
 

  while (itstart <= itend)
{
    swap( (*itstart),(*itend));
     itstart++;
    itend--;
}

}

int main(){
    //  vector<int> v{1,2,3,4,5}; //not allowed

vector<int> v;
int arr[] = {1,2,3,4};
for (int i = 0; i < 4; i++)
{
    v.push_back(arr[i]);
}

cout<<"Before swap"<<endl;
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}

reverseAfterpos(v,1);

cout<<"After swap"<<endl;
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<endl;
}

return 0;
}




//iterator
// vector<int> ::iterator itstart = v.begin();
// vector<int> ::iterator itend=v.end()-1;


// cout<<(*itstart)<<endl;
// cout<<(*itend)<<endl;