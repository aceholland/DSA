#include <iostream>
using namespace std;
int main(){
    int marks[5]={99, 10, 20, 30, 85};
    double price[2];
    for (int j=0; j<2; j++){
        cin>>price[j];
    }
    int s=sizeof(marks); //gives total memory size of array not the length so we have to divide it with each 
    cout<<sizeof(marks);// will print 20 as 4 bits * 5=20
    cout<<endl;
    int size=5;
    for (int i=0; i<size; i++){
        
        cout<<marks[i]<<endl;
    }
}

