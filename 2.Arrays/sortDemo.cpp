#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr ){
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr.size()-i-1; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]); 
        }
    }
} 
void printArray(vector<int> arr , string message){
    cout<<"[ "<<message<<"]"<<endl; 
    for(const auto& val : arr ){
        cout<<" "<<val; 
    }
    cout<<endl; 
}
int binarySearch(vector<int>& arr, int target){
    bubbleSort(arr);
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
int main(){
    system("clear"); 
    vector<int> arr = {45,2,3,5,66,11}; 
    // printArray(arr," Before sort "); 
    // bubbleSort(arr); 
    // printArray(arr, " After sort "); 
    int target= 45; 
    int index = binarySearch(arr, target); 
    printArray(arr, "All elements ");
    if(index == -1 ) cout<<"Not found ! "<<endl; 
    else cout<<"Item = "<<target<<" found at index  = "<<index<<endl; 
    return 0; 
}