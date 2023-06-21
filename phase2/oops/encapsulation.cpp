#include<bits/stdc++.h>
using namespace std;

//encapsulated
class Student{

    private:
    string name;
    int age = 20;
    int cls;

    public:
    int getAge(){
        return this->age;
    }


};

int main()
{

Student rishu;
cout<<rishu.getAge()<<endl;
 
 
 
    return 0;
}