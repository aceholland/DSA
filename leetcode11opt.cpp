#include <iostream>
using namespace std;
//time complexity : O(n)

int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int n=9;
    int lp=0, rp=n-1, maxWater=0;
    while(lp<rp){
        int ht=min(arr[lp], arr[rp]);
        int width=rp-lp;
        int currWater=ht*width;
        maxWater=max(maxWater,currWater);
        (arr[lp]<arr[rp])?lp++:rp--;
    }
    cout<<"Maximum water is : "<<maxWater<<endl;
    return 0;
}