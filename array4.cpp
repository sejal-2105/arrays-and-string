#include<iostream>
using namespace std;

int main(){
    int arr1[5];
    int sum=0;
    int avg;
    
    for (int i=1;i<=5;i++){  //input
        cout<<"Enter element number "<< i <<" :";
        cin>>arr1[i];
    }
    
    for (int i=0;i<=5;i++){   //sum
        sum=sum+arr1[i];
    }
    cout<<"Sum of all the elements of the array is :"<<sum<<endl;
    
    for(int i=0;i<=5;i++){   //average
        avg=sum/5;
    }
    cout<<"Average of all the elements is :"<<avg<<endl;
    
    return 0;
}