#include<bits/stdc++.h>
using namespace std;

class Human{
  public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }  

   void setWeight(int w){
        this->weight = w;
    }
};

//class created using inheritance
class Male: public Human {

    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }

};
 
int main()
{
 Male obj1;

 cout<<obj1.age<<endl;
 cout<<obj1.weight<<endl;
 cout<<obj1.height<<endl;
 obj1.setWeight(90);
  cout<<obj1.weight<<endl;
 obj1.sleep();
 
 
    return 0;
}