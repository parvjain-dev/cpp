#include<iostream>
#include "oopshero.cpp"
using namespace std;

class hero1 {
 //properties

char level;


 public:
 int health;

// void setlevel(char lev){
//     level = lev;
// }
void setlevel(char lev, char name){
    if (name == 'A')
    {
        level = lev;
    }
    else {
        cout<<"user invalid"<<endl;
    }
}
char getlevel(){
    return level;
}

// private :
char name [100];
};
int main(){
  hero1 ramesh;
  ramesh.health=12;
//   ramesh.name='parv';
//   cout<<ramesh.health;


  ramesh.setlevel('a','A');
  cout<< ramesh.getlevel()<<endl;
return 0;
}