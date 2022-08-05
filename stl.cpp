#include<iostream>
#include<array>

#include <vector> 

#include <deque>

#include <stack>

#include <queue>

#include <set>

#include<map>

#include<algorithm>

using namespace std;
int main(){
 array<int , 4> arr = {1,2,3,4};
//  cout<<arr.size()<<endl;

//  cout<<arr[2]<<endl;
//  cout<<"Element on index 2 --> "<<arr.at(2)<<endl;
//  cout<<"Is array empty "<<arr.empty()<<endl;
//  cout<<"First element "<<arr.front()<<endl;


//front back at these function can be use in vector also
 vector<int> v;
//  cout<<v.capacity()<<endl;
 

 vector <int> a(5,1); // will creat vector of size 5 and initiaize it with 1
 for (int i = 0; i < a.size(); i++)
 {
     //cout<<a[i]<<endl;
 }
 

 //to insert element in vector we use 
//  v.push_back(1); //o/p 1
//   cout<<v.capacity()<<endl;
//  v.push_back(2);  //o/p 2
//   cout<<v.capacity()<<endl;
//  v.push_back(3);  //o/p 4 (Here it double its size)
//   cout<<v.capacity()<<endl;


// cout<<v.size() <<endl;//3 

//v.pop_back(); //remove last element from vector


// deque<int> d;
// d.push_back(12);
// d.push_front(13) ;

// // d.pop_front();
// for (int i = 0; i < d.size(); i++)
// {
//   cout<<d.at(i)<<endl;
// }
// // cout<<d.at(1);
// cout<<"size of before delete "<<d.size()<<endl;
// d.erase(d.begin(), d.begin()+1); // it will delete first element
// cout<<"size of after delete "<<d.size()<<endl;


// stack<string> s;
// s.push("ajay");
// s.push("rajendera");
// s.push("kumar");

// cout<<s.top()<<endl;
// s.swap("ajay" , "kumar");
// cout<<s.top()<<endl;


//max heap
priority_queue<int> maxi;

//min heap
priority_queue<int , vector<int>, greater<int> > mini;


// maxi.push(1);
// maxi.push(3);
// maxi.push(4);
// maxi.push(5);
// int n = maxi.size();//here we are storing size because after popping every time the size is changing everytime 

// for (int i = 0; i < n; i++)
// {
//   cout<<maxi.top()<<endl;
//   maxi.pop();
// }

// map<int , string> m;
// m[1] = "babbar";
// m[2] = "love";
// m[13] = "kumar";

// m.insert( {5,"bheem"});

// for(auto i:m){
//   cout<<i.first<<" "<<i.second<<endl;
// }

vector<int> v1;
v1.push_back(1);
v1.push_back(3);
v1.push_back(6);
v1.push_back(7);

// cout<<"Finding 6 --> "<<binary_search(v1.begin(), v1.end()-2,6)<<endl;

cout<<"lower bound --> "<<lower_bound(v.begin(), v.end(),6)-v.begin()<<endl;

return 0;
} 