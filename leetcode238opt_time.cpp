#include <iostream>
#include <vector>
using namespace std;

vector<int> optimisetime(vector<int>v){
    int n=v.size();
    vector<int>ans(n,1);
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);

    for (int i=1; i<n; i++){
        prefix[i]=prefix[i-1]*v[i-1];
    }

    for (int i=n-2; i>=0; i--){
        suffix[i]=suffix[i+1]*v[i+1];
    }

    for (int i=0; i<n; i++){
        ans[i]=prefix[i]*suffix[i];
    }

    return ans;
}
int main(){
    vector<int>v={1,2,3,4};
    vector<int> ans=optimisetime(v);
    for (int value : ans){
        cout<<value<<" ";
    }
}