//return pair sum in 2 pointer approach, here we are using the advantage of the word 'sorted'

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>v={2,7,11,15};
    vector<int>ans;
    int n=v.size(), target=9;
    int i=0,j=n-1;
    while (i<j){
        if (v[i]+v[j]>target){
            j--;
        }
        else if (v[i]+v[j]<target){
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            cout<<ans[0]<<" "<<ans[1];
            break;
        }
         }
        return 0;
    }
   
