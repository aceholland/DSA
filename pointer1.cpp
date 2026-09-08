#include <iostream>
using namespace std;

int main(){
    int a =10;
    int* ptr=&a;
    cout<<ptr<<endl;
    cout<<&a<<endl;

    //pointers: are special variables that store the addresses of other variables

    float h=100.43;
    float* ptr2=&h;

    //a pointer which stores the address of another pointer :

    int** ptr12=&ptr;

    cout<<&ptr<<endl;
    cout<<ptr12<<endl;
}