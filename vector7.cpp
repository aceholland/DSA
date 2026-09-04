//majority element : exists more than floor [n/2] times in the array

//optimised solution

#include <iostream>
#include <vector>
#include <algorithm> //for using sort
using namespace std;

int majorityElement(vector<int>v){
    int n=v.size();
    sort(v.begin(), v.end());
    int freq=1, ans=v[0];
    for (int i=1; i<n; i++){
        if (v[i]==v[i-1])
             freq++;
        else{
            freq=1;
            ans=v[i];
        }
        if (freq>n/2){
            return ans;
        }
        
    }return ans;

}

int main(){
    vector<int>v={1,2,1,1,1,2,3,3,3,1,1,1};
    cout<<majorityElement(v)<<endl;
}