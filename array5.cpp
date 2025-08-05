#include <iostream>
using namespace std;

int main() {
    
    int n;
  int arr[n];
  
  cout<<"Enter array length: ";
  cin>>n;
  
  for (int i=1;i<=n;i++){  //input of array
        cout<<"Enter element number "<< i <<" :";
        cin>>arr[i];
  }
  
  for(int i=1;i<=n;i++){     //printing array
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  for(int i = 0;i < n; ++i) {    //max
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout <<endl<< "Maximum element is: " << arr[0]<<endl;
  
  for(int i = 0;i < n; ++i) {   //min
    if(arr[0] > arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Minimum element is: " << arr[0];

  return 0;
}
