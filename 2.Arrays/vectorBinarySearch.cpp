#include<iostream>
#include<vector> 
using namespace std; 
void printVector(vector<int> &arr, string message){
    cout<<"[\t"<<message<<"\t]"<<endl; 
    for(const auto& val :  arr){
        cout<<" "<<val; 
    }
    cout<<endl; 
}
// binary Search function here ! 
// TC=O(log n )
// SC=O(1)
int binarSearch(vector<int>& arr, int target){
    int low =0;
    int high = arr.size() -1; 
    while(low<=high){
        int mid = low + (high - low )/2; 
        cout<<"mid = "<<mid<<endl; 
        if(arr[mid]== target) return mid; 
        else if(target>arr[mid]) low  = mid +1; 
        else high = mid -1; 
    }
    return -1; 
}
// linearSearch
// TC=O(n)
// SC=O(1)
int linearSearch(vector<int>& arr, int target ){
    for(int i = 0; i<arr.size(); i++){
        if(target==arr[i]) return i; 
    }
    return -1; 
}
int main(){
    system("clear"); 
    vector<int> arr={12,44,55,77,88,99}; 
    printVector(arr,"Vector of number"); 
    int target=88; 
    int index = binarSearch(arr,target); 
    if(index == -1 ){
        cout<<"Not found! "<<endl; 
    }else {
        cout<<"Item = "<<target
            <<" found at index = "
            <<index
            <<endl; 
    }

    return 0 ; 
}