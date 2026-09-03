//maximum subarray sum :
//using brute force, we can do like we did prev but time complexity will be O (n^3) 
//so what we need is to reduce time complexity and we can reduce it to O(n^2) by using sum=0 beofre and just adding the number to alr made sum

#include <iostream>
using namespace std;

int main(){
    int arr[7]={3,-4,5,4,-1,7, -8};
    int n=7;
    int maxS=INT_MIN;
    for (int start=0; start<n; start++){
        int sum=0;
        for (int end=start; end<n; end++){
            sum+=arr[end];
            maxS=max(maxS,sum);
        
        }
    }
    cout<<maxS;
}

//but a more optimised form for this exists and is called Kadane's algorithm and it is O(n) time complexity and O(1) space complexity