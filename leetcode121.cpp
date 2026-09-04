//leetcode 121

#include <iostream>
#include <algorithm>
using namespace std;

int bestBuy(int arr[], int n){
    int bBuy=arr[0], maxP=0;
    for (int i=1; i<n; i++){
         if (arr[i]>bBuy){
            maxP=max(maxP, arr[i]-bBuy);

         }
        bBuy=min(bBuy, arr[i]);
    }
    return maxP;
}

int main(){
    int arr[6]={7,1,5,3,6,4};
    cout<<bestBuy(arr, 6)<<endl;
}