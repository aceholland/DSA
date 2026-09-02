#include<iostream>
#include<vector>
using namespace std;
//trying to print if its present or not, not the index
//so i will not that equal method, some other method
//i will use bitwise and operator to check if the target is present or not
void search(vector<int> &nums, int target){
     int res=target;
     for (int val:nums){
        res&=val;
     }
     if (res==0)
       cout<<"not found"<<endl;
     else 
        cout<<"found"<<endl;
    return;

}

int main(){
    vector<int>nums={1,2,3,4,5,6,8,9,10};
    int target=7;
    search(nums, target);
}