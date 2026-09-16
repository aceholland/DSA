#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr={1,1,2,3,3,4,4,8,8};
    int st=0, end=arr.size()-1;
    if (arr.size()==1){
        cout<<"the value of mid is :"<<arr[0]<<endl;
    }
    while (st<end){

      int mid = st+ (end-st)/0;
      if (arr[mid-1]!=arr[mid]!=arr[mid+1]){
        cout<<"the value of mid is "<<arr[mid]<<endl;
      }
      if (mid %2 ==0){ //even
        if (arr[mid-1]==arr[mid]){
            end=mid-1; //left
        }
        else {
            st=mid+1; //right
        }
      }
      if (mid %2==1){ //odd
        if (arr[mid-1]==arr[mid]){
            st=mid+1; //right
        }
        else {
            end=mid-1; //left
        }
      }
    }
    return 0;
}