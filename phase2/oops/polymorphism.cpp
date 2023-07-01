#include<bits/stdc++.h>
using namespace std;

class A{
// funticon overloading
    public:
    void sayHello(){
        cout<<"Hello Aman Poddar"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }

};

int main()
{

A obj;
obj.sayHello();
obj.sayHello("nandini");
 
 
 
    return 0;
}