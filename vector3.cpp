//arrays have static memory allocation
//which means memory is allocated during compile time 
//whereas vectors have dynamic memory allocation 
//which means memory is allocated during runtime.
//static allocation is in the stack 
//dynamic allocation is in the heap

//lets see size and capacity 
//capacity doubles everytime btw

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    cout<<"size of vector v1 is "<<v1.size()<<endl;
    cout<<"capacity of vector v1 is "<<v1.capacity()<<endl;
    v1.push_back(3);
    cout<<"size of vector v1 after push_back is "<<v1.size()<<endl;
    cout<<"capacity of vector v1 after push_back is "<<v1.capacity()<<endl;

}