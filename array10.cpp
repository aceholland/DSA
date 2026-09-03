//Kadane's Algorithm is a dynamic programming algorithm that can be used to find the 
//maximum sum of a contiguous subarray in an array of integers. 
//The algorithm works by iterating through the array and keeping track of the maximum sum found so far,
// as well as the current sum of the subarray being considered. If the current sum becomes negative, 
//it is reset to zero, as a negative sum would not contribute to a maximum sum.

#include <iostream>
using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7, -8};
    int n=7;
    int maxS=INT_MIN;
    int currSum=0;
    for (int val : arr){
        currSum+=val;
        maxS=max(maxS,currSum);
        if (currSum<0){//we are doing this after comparing cuz if the array si full negative we dont want it all to set to 0
            currSum=0;
        }
    }
    cout<<maxS;
    return 0;
}

//linear time complexity O(n) and constant space complexity O(1)