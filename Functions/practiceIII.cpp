#include<bits/stdc++.h>
using namespace std; 

// Adding the element of the arrays 
// it.begin(), it.end()
int sumArray(int arr[] , int n){
    int res;
    for (int i = 0 ; i < n ; i++){
        res += arr[i];
    }
    return res;
}
int main(){
  system("clear"); 
  int nums[] = {1,2,3,4};
  int size = sizeof(nums) / sizeof(*nums);
  cout<<"Sum Array: "<< sumArray(nums, size);
  return 0; 
}