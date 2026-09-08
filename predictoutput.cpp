#include <iostream>
using namespace std;

int main(){
    int a=5;
    int* p=&a; //stores the address of a
    int **q=&p; //stores address of pointer p
    cout<<*p<<endl; //=*address(p) = prints the value of a=5
    cout<<**q<<endl; //*address (*address(q)) = the value of a = 5
    cout<<p<<endl; // the address of a
    cout<<*q<<endl; // the value of p which is the address of a

     

    return 0;
}