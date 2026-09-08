#include <iostream>
using namespace std;

int main(){
    //pointer++ will increment 1 but not add it , itll increment the memory like if the address was initially 100
//it will increment 1 unit based on its size for example if its int , it'll be 1 unit = 4 , so next will be 104

  int a=10;
  int* ptr=&a;
  cout<<ptr<<endl;
  ptr++;
  cout<<ptr<<endl;

  //now addition
  ptr=ptr+3; //this means 3*4=12 bytes memory cuz the datatype is int
  cout<<ptr<<endl;
  //38-39-3a-3b-3c-3d-3e-3f-40-41-42-43-44 so from 38 to 44 after adding 3 = 12 bytes

  int arr[]={1,2,3,4,5,6};
  cout<<*arr<<endl;
  cout<<*(arr+1)<<endl;
  cout<<*(arr+2)<<endl;
  cout<<*(arr+3)<<endl;
  cout<<*(arr+4)<<endl;
  cout<<*(arr+5)<<endl;
 

  //we cannot add pointers but we can substract them and they will give the blocks in between them 
  //we can substract only when the pointers are of the same type for example both are int
  //108-100=8 = 2 int=2 bytes

  int* ptr2;
  int* ptr1=ptr2+2;

  cout<<ptr1-ptr2<<endl;//we will get 2
  cout<<ptr2-ptr1<<endl;

  int *ptr3;
  int *ptr4;
  cout<<ptr3<<endl;
  cout<<ptr4<<endl;
  cout<<(ptr3<ptr4)<<endl; //will print 1 if yes else 0
}