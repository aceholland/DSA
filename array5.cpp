//linear search
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i=0; i<size; i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={4,5,6,7,8,9,10};
    int target=12;
    int size=7;
    cout<<linearSearch(arr, size, target)<<endl;
    return 0;
}