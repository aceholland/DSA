//vector functions:
//size
//push_back
//pop_back
//front
//back
//at
# include <iostream>
#include <vector> //vector header file
using namespace std;
int main(){
    vector<char>v1={'a', 'b', 'c', 'd', 'e', 'f'};
    cout<<"size of vector v1 is "<<v1.size()<<endl;
    v1.push_back('g'); //adds to last
    cout<<"size of vector v1 after push_back is "<<v1.size()<<endl;
    v1.pop_back(); //removes last element
    cout<<"size of vector v1 after pop_back is "<<v1.size()<<endl;

    vector<int>v2={25,25,55,45,65};
    cout<<v2.front()<<endl;//front element
    cout<<v2.back()<<endl;//back element
    cout<<v2.at(2)<<endl;//element at index 2
}