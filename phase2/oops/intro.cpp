#include<bits/stdc++.h>
#include"hero.cpp"
using namespace std;
 
int main()
{
//static allocation
Hero h1;
//dynamic allocation
Hero *b = new Hero;
(*b).health = 70; 
cout<<"Health is:"<<(*b).health<<endl;
cout<<"Health is ->"<<b->health<<endl;

h1.health = 70; 
cout<<"Size is: "<<sizeof(h1)<<endl; 
cout<<"Health is:"<<h1.health<<endl;
 
    return 0;
}