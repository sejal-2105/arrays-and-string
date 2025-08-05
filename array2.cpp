#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    
    cout<<"Original Array is ";
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;

cout<<"Reversed Array:";
for(int i = 4; i >= 0; --i) {
    cout << arr[i]<<" ";
}
return 0;
}