//majority element , most optimised solution : moore's voting algorithm

//voting problems
//when variation comes and no majority element exists moores algo returns last value so to fix that we do the following step

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>v){
    int freq=0, ans=0;
    for (int i=0; i<v.size(); i++){
        if (freq==0){
            ans=v[i];
        }
        if (ans==v[i]){
            freq++;
        }
        else {
            freq--;
        }
    }
    return ans;

    int count=0;
    for (int val:v){
        if (val==ans){
            count++;
        }
    }
    if (count>v.size()/2)
    return ans;
    else
    return -1;
}

int main(){
    vector<int>v={1,2,2,3,1,1,1,1,1};
    cout<<majorityElement(v)<<endl;
}