//vector is a dynamic data structure that can grow and shrink in size. It is part of the C++ Standard Template Library (STL) and provides a way to store a collection of elements. Vectors are implemented as dynamic arrays, which means they can change their size during runtime.
# include <iostream>
#include <vector> //vector header file
using namespace std;
int main(){
    vector<int> v={1,2,3};
    cout << v[0] << std::endl;
    for (int i=0; i<3; i++){
        cout<<v[i]<<endl;
    }
    vector<int> v2(3,2); // Creates a vector with 3 elements, each initialized to 2
    for (int i=0; i<3; i++){
        cout<<v2[i]<<endl;
    }

    for (int val: v){
        cout<<val<<endl; // here val does not stores index but stores the value at each index position
    }
    return 0;
}