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

class GermanShepherd: public Dog {

};
 
int main()
{
    GermanShepherd Tom;
    Tom.speak();
 
 
 
    return 0;
}