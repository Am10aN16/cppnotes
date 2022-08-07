#include <iostream>
using namespace std;

int main(){
    // int a,b;

    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;

    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;

    // char op;
    // cout<<"Enter the operation: "<<endl;
    // cin>>op;

    // switch (op)
    // {
    // case '+': cout<< (a+b) << endl;
    //     break;
    // case '-': cout<< (a-b) << endl;
    //     break;
    // case '*': cout<< (a*b) << endl;
    //     break;
    // case '/': cout<< (a/b) << endl;
    //     break;
    // case '%': cout<< (a%b) << endl;
    //     break;
    
    // default: cout<< "Please enter a valid operation"<<endl;
    //     break;
    // }

//homework
    int amount ;
    cout<<"Enter the amount: "<< endl;
    cin>>amount;

    int hun_notes;
    int fif_notes;
    int twenty_notes;
    int one_notes;



    switch(1){
        case 1: hun_notes =  amount/100;
                amount = amount - 100*hun_notes;

        case 2: fif_notes =  amount/50;
                amount = amount - 50*fif_notes;

        case 3: twenty_notes =  amount/20;
                amount = amount - 20*twenty_notes;

        case 4: one_notes =  amount/1;
                 amount = amount - 1*one_notes;


    }

    cout<< "No of hundred notes req in amount:"<<hun_notes<<endl;
    cout<< "No of fifty notes req in amount:"<<fif_notes<<endl;
    cout<< "No of twenty notes req in amount:"<<twenty_notes<<endl;
    cout<< "No of one notes req in amount:"<<one_notes<<endl;

}