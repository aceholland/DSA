#include <iostream>
using namespace std;

int main(){
    int arr[5], max=0, min=0;
    // or we can use int smallest=INT_MAX; this was + infinite
    // so largest=INT_MIN, this is -infinite
    for (int i=0; i<5; i++){
        cin>>arr[i];
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }
        //smallest=min(arr[i], smallest);
    }
    cout<<"max is :"<<max<<endl;
    cout <<"min is : "<<min<<endl;
}