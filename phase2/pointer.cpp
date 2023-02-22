#include <iostream>
using namespace std;

// void swap(char *x , char*y)
// {
//     char *t = x;
//     x =y;
//     y =t;
// }

int f(int x, int *py ,int **ppz){
    int y , z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main(){
    // int num = 5;
    // cout<<num<<endl;

    //address of operator- &
//     cout<<"Address of num operator is: "<<&num<<endl;

//    int *ptr = &num;
// cout<<"Value is: "<< *ptr<<endl;

// double d = 4.3;
// double *p1 = &d;

// cout<<"value of d is"<<*p1<<endl;
// cout<<"Address of d is"<<p1<<endl;

// cout<<"size of int is : "<< sizeof(*ptr)<<endl;
// cout<<"size of pointer to int is: "<< sizeof(ptr)<<endl;
// cout<<"size of pointer to double is: "<< sizeof(p1)<<endl;

//copying a pointer
// int num =5;
// int *p =&num;

// int *q =p;
// cout<<p<<" - "<<q<<endl;
// cout<<*p<<" - "<<*q<<endl;

//important concept- pointer arithmetic
// int i =3;
// int *t = &i;
// *t = *t+1;
// cout<<*t<<endl;
// cout<<"Before t : "<<t<<endl;
// t = t+1;
// cout<<"After t : "<<t<<endl;

// int firstvalue = 5, secondvalue = 15; 
// char thirdvalue = 'a'; 
// int * p1, * p2; 
// char * p3;
//  p1 = & firstvalue; // p1 = address of firstvalue
//   p2 = & secondvalue; // p2 = address of secondvalue 
//   p3 = & thirdvalue; // p3 = address of thirdvalue 
//   * p1 = 10; // value pointed to by p1 = 10
//    * p2 = * p1; // value pointed to by p2 = value pointed to by p1 
//     p1 = p2; // p1 = p2 (value of pointer is copied) 
//     * p1 = 20; // value pointed to by p1 = 20
//      * p3 = 'b'; // value pointed to by p3 = ‘b ’
    //  cout << "firstvalue is " << firstvalue << endl; 
    //  cout << "secondvalue is " << secondvalue << endl; 
    //  cout << "thirdvalue is " << thirdvalue << endl; 
    //  return 0;

//Ques 1
    // float f = 10.5;
    // float p =2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<< *ptr<< " "<<f<<" "<<p;

    //Ques 2,3
    // int a = 7;
    // int b= 17;
    // int* c= &b;
    // *c = 7;
    // cout<<a<<""<<b;

    //Qus 4
    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout<< *ptr <<endl;

    // char ch = 'a';
    // char* ptr = &ch;
    // ch++;
    // cout<<*ptr<<endl; 

    // int arr[] = {4, 5 ,6 ,7};
    // int* p = (arr + 1);
    // cout<< *arr +9;

// char b[]="xyz";
// char* c = &b[0];
// cout<<c<<endl;

// char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];

// char arr[20];
// int i;
// for(i =0;i<10;i++){
//     *(arr + i) = 65 + i;
// }
// *(arr + i) ='\0';
// cout<<arr;

// char *ptr;
// char Str[] = "abcdefg";
// ptr = Str;
// ptr += 5;
// cout<<ptr<<endl;; 

// char st[] = "ABCD";
// for(int i= 0; st[i] != '\0' ; i++) {
//     cout<< st[i]<< *(st)+i << *(i+st) << i[st];
// }


// char *x = "nin";
// char *y = "cod";
// char *t;
// swap(x , y);
// cout<<x<<" "<<y;
// t =x ;
// x = y;
// y = t;
// cout<<" "<<x<<" "<<y;


int c, *b , **a;
c = 4;
b = &c;
a = &b;
cout<< f(c , b ,a);


    return 0;
}