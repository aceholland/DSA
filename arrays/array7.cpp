#include <iostream>
using namespace std;

void unique(int arr[], int n){
    int i=0;
    while (i<n){
      int count=0;
      int j=i+1;
      while (j<n){
       if (arr[i]==arr[j]){
          count++;
      }
      j++;
    }
      if (count>1)
      cout<<arr[i]<<" is repeated "<<count<<" times"<<endl;
    i++;}
      
}
int main(){
      int arr[]={1,2,3,4,5,6,6,7,8,8,9, 2,1,2,1, 2, 4,5,6,7,8,9,10};
      int n=sizeof(arr)/sizeof(arr[0]);
      unique(arr,n);
      return 0;
}