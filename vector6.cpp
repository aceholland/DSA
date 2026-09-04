//majority element : exists more than floor [n/2] times in the array
//brute force
#include <iostream>
#include <vector>
using namespace std;

int majorityel(vector<int>v){
    
    int n=v.size();
    for (int val:v){
        int freq=0;
        for (int el:v){
            if (val==el)
              freq++;
        }
        if (freq>n/2)
        return val;
    }
    return -1;
}

int main(){
      vector<int>v={1,2,2,1,1,1,1};
      cout<<majorityel(v)<<endl;
      return 0;
}