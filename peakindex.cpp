//peak index in a mountain array

//brute force : O(n): linear search 

//optimised : binary search : O(log n)

#include <iostream>
#include <vector>
using namespace std;

int main(){
      vector<int>arr={0,1,3,8,9,5,2};
      int st=0, end=arr.size()-1, peak=-1;

      while (st<end){
        int mid = st+ (end-st)/2;
        if (arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid]){
              peak=mid;
              break;
        }
        else if (arr[mid-1]<arr[mid]){
            st=mid+1;
        }
        else {
            end=mid-1;
        }
      }
      cout<<"peak index is "<<peak<<" and peak index value is "<<arr[peak]<<endl;
      return 0;
}