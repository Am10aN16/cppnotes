#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};

//single inherited
class Dog: public Animal{

};
 
int main()
{
    Dog d;
    d.speak();
 
 
 
    return 0;
}