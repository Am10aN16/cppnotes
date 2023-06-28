#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human {
    public:
        string color;

    public:
         void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Hybrid: public Animal, public Human{

};

 
int main()
{
    Hybrid Obj;
    Obj.speak();
    Obj.bark();
 
    return 0;
}