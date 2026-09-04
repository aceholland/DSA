//reducing both space and time complexity

#include <iostream>
#include <vector>
using namespace std;

vector<int> optimise(vector<int>v){
    int n=v.size();
    vector<int>ans(n,1);
    
    for (int i=1; i<n; i++){
        ans[i]=ans[i-1]*v[i-1];
    }

    int suffix=1;
    for (int i=n-2; i>=0; i--){
        suffix*=v[i+1];
        ans[i]*=suffix;
    }
    

    return ans;
}
int main(){
    vector<int>v={1,2,3,4};
    vector<int> ans=optimise(v);
    for (int value : ans){
        cout<<value<<" ";
    }
}