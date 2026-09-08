#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<arr<<endl; //arr is like the pointer but it stores the addres of the 0th index only
    //btw its called a constant pointer
    cout<<*arr<<endl; //yeah so it stores the value of 0th value acc to what the above sentence

    //like normally we can store values and change them right like the pointers but we cant with arr cuz it will give
    //error that lvalue must be modifable suggesting that it aint modifyable now.
    return 0;
}