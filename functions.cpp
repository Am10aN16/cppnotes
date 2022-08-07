#include<iostream>
using namespace std;

//power of b to a function

// int power(int a , int b){
  
//     int ans =1;
//     for (int i = 1; i <=b ; i++)
//     {
//         ans = ans*a;
//     }
//     return ans;    
// }


// int main() {
//     int a , b;
//       cin>>a>>b;
//    int answer = power(a,b);
//    cout<<"Answer is : "<< answer << endl;
// }


 //function for even-odd
// bool isEven(int a){
//     //odd
//     if(a&1) return 0;

//     return 1;
// }

// int main(){
//     int num;
//     cin>>num;

//     if(isEven(num)){
//         cout<<"number is even"<<endl;
//     }
//     else{
//      cout<<"number is odd"<<endl;
//     }
// }


//nCr func

// int factorial(int n){
// int fact = 1;

// for (int i = 1; i <= n; i++)
// {
//     fact = fact * i;
// }
// return fact;

// }

// int nCr(int n , int r){
//     int num = factorial(n);
//     int den = factorial(r)*factorial(n-r);

//     return num/den;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;

//     cout<< "Answer of nCr is: " << nCr(n,r) << endl;
// }

//AP que of 3*n + 7

// int NthTerm( int n){
//     int d =3; int a= 10;
//     int term =  a + ((n-1)*d);

//     return term;
// }

// int main(){
//         int n;
//         cin>>n;

//         cout<< "Nth term of AP 3*n+7 is: " << NthTerm(n) << endl;

// }

//set bits

int setBits(int a , int b){
    int count = 0;

    while(a!=0){
        int bit = a&1;
        if(bit== 1){
            count++;
        }
        a = a>>1;
    }

    while(b!=0){
        int bit = b&1;
        if(bit== 1){
            count++;
        }
        b = b>>1;
    }
     
     return count;
}

int main(){
    int a ,b;
    cin>>a>>b;

    cout<< "No of bit sets in and b is: " << setBits(a,b) <<endl;
}

//fbonacci series

// int NthFibonacci(int n){
//     int term  = (n-1) + (n-2);
//     return term;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<< "Fibonacci no: " << NthFibonacci(n) << endl;
// }

