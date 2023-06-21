#include<bits/stdc++.h>     
using namespace std;

class Hero{
    //properties
    public:
    int health ;
    char level;

//PARAMETERIZED CONSTRUCTOR
    Hero(int health,char level) {
   this->health = health;
   this->level = level;
   cout<<endl;
}

//copy constrcutor
Hero(Hero& temp){
    this->health=temp.health;
    this->level= temp.level;
}

};



int main()
{
Hero Ram(100,'A');

//copy constructor
Hero Laxman(Ram);

cout<<Laxman.health<<endl;



//static allocation
// Hero h1(10 ,'C');
//dynamic allocation
// Hero *b = new Hero;
// (*b).health = 70; 
// cout<<"Health is:"<<(*b).health<<endl;
// cout<<"Health is ->"<<b->health<<endl;

// h1.health = 70; 
// cout<<"Size is: "<<sizeof(h1)<<endl; 
// cout<<"Health is:"<<h1.health<<endl;

    return 0;
}