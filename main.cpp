#include <iostream>
using namespace std;

int BinarySearch(int arr[10], int left, int right, int x){
  while(left<=right){
    int mid = left + (right - left) / 2;
    if(arr[mid]==x){
      return mid;
    }
    else if(arr[mid]<x){
      left = mid + 1;
    }
    else 
      right = mid - 1;
  }
return 0;
}

int main() {
  int arr[10];
  int num;
  int output;
  cout<<"Enter Array element in ascending form"<<endl;
  for(int i = 0; i<10;i++){
    cin>>arr[i];
  }
  cout<<"Enter a number you want to search"<<endl;
  cin>>num;
  output = BinarySearch(arr, 0 , 9,num);
  if(output == -1){
    cout<<"No Match found"<<endl;
  }
  else 
  {
    cout<<"Match found at positin at : "<<output+1<<endl;
  }
}