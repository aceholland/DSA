//container with most water

#include <iostream>
using namespace std;

int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int maxWater=0;
    int n=9;
    for(int i=0; i<9; i++){
        for (int j=i+1; j<n; j++){
            int w=j-i;
            int ht=min(arr[i], arr[j]);
            int currWater=ht*w;

            maxWater=max(maxWater, currWater);

        }
    }
    cout<<maxWater<<endl;
}