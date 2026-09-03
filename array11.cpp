//return psir sum in a sorted array, here we didnr even use the advantage of the word 'sorted'

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v={2,7,11,15};
    vector<int>ans;
    int n=4;
    int target=9;

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (v[i]+v[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                cout<<ans[0]<<" "<<ans[1];
                
            }
        }

    }
    
 return 0;
}