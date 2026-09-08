// pass by reference using pointers 
 // they are alias like iron man and tony stark
#include <iostream>
using namespace std;

void changeA(int* ptr){
   *ptr=20;
}

int main(){
    int a=10;
    changeA(&a);
    cout<<"inside main function : "<<a<<endl; 
    return 0;
}