//majority element , most optimised solution : moore's voting algorithm

//voting problems

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
}

int main(){
    vector<int>v={1,2,2,3,1,1,1,1,1};
    cout<<majorityElement(v)<<endl;
}