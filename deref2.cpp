#include <iostream>
using namespace std;

int main(){
    int a =10;
    int* ptr=&a;
    int** parptr=&ptr;
    cout<<ptr<<endl;
    cout<<&a<<endl;

    //pointers: are special variables that store the addresses of other variables

   //dereference operator will give us the value of the thing at that particular address

   cout<<*(&a)<<endl; //*with address will give the value at that address
   cout<<*(ptr)<<endl;
   cout<<*(parptr)<<endl;
   cout<<ptr<<endl;
   cout<<*(*(parptr))<<endl; //double dereferencing

    
}