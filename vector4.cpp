//leetcode 136

//stl study 

//when we do pass by reference we add &num

//linear complexity :means we only have to use one loop

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &nums){
    int ans=0;
    for (int val: nums){
        ans^=val; //xor operator
    }
    return ans;
}

int main(){
    vector<int>nums={1,2,2,3,3,4,5,6,6,5,5,5,4};
    cout<<singleNumber(nums)<<endl;
}