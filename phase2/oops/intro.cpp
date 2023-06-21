#include<bits/stdc++.h>     
using namespace std;

class Hero{
    //properties
    public:
    int health ;
    char level;
    static int timeToComplete;

//simple construstor
Hero(){
    cout<<"Constrtuctor called"<<endl;
}

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

static int random(){
    return timeToComplete;
}

//destructor function
~Hero(){
    cout<<"Destructor bhai called"<<endl;
}

};

int Hero::timeToComplete = 5;

int main()
{

// cout<< Hero::timeToComplete << endl;
cout<<Hero::random()<<endl;

Hero a;
cout<<a.timeToComplete<<endl;








//static
// Hero h1;
//dynamic
// Hero *h2 = new Hero();
//manually destructor call
// delete h2;

// Hero Ram(100,'A');

//copy constructor
// Hero Laxman(Ram);

// cout<<Laxman.health<<endl;



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