#include<iostream>
#include<chrono>
using namespace std::chrono; 
using namespace std; 

// Create a linear search function 
int linearSearch(int values[],int size,  int target){
    auto startTime = high_resolution_clock::now(); 
     
     for(int i =0; i<size; i++){
        if(target==values[i]){
            auto endTime = high_resolution_clock::now();
            auto duration = duration_cast<nanoseconds> (endTime - startTime); 

            cout<<"Time for Linear Search : "
                << duration.count()
                <<" nanoseconds "
                << endl; 
            return i; // return the found index 
        }
    }
    auto endTime = high_resolution_clock::now(); 
    auto duration = duration_cast<nanoseconds>(endTime-startTime); 
    cout<<"Time for Linear Search : "
                << duration.count()
                <<" nanoseconds "
                << endl;
    return -1; // -1 represent non-existing element (not found )
}
int binarySearch(int values[], int size, int target){
    auto startTime = high_resolution_clock::now(); 
    int low=0; 
    int high = size -1 ; 
    while(low <= high){
        // mid = middle of the array 
        int mid = low + (high - low ) / 2; 
        //cout<<"Mid = "<<mid<<endl; 
        if(values[mid] == target){
            auto endTime = high_resolution_clock::now(); 
            auto duration = duration_cast<nanoseconds>(endTime-startTime); 
            cout<<" Binary Search Time is : "
                <<duration.count()
                <<" nanoseconds "<<endl; 
            return mid; // index 
        }else if(values[mid] > target){
            high = mid - 1; // decrease high
        }else {
            // if values[mid] < target
            low = mid + 1 ; // increase low 
        }
    }
    auto endTime = high_resolution_clock::now(); 
    auto duration = duration_cast<nanoseconds>(endTime-startTime); 
    cout<<" Binary Search Time is : "
        <<duration.count()
        <<" nanoseconds "<<endl;
    return -1; 
}
int main(){
    system("clear"); 
    // static array 
    const int initSize = 1000000; 
    int values[initSize]; 
    // init values 
    for(int i = 0; i<initSize; i++){
        values[i]=i*2; 
        // n = 5 
        // 0 2 4 6 8 
    }
    int size = sizeof(values)/ sizeof(*values); 
    // search 
    int target=2; 
    int foundIndex = linearSearch(values, size , target); 
    if(foundIndex==-1){
        cout<<" ❌ Item = "<<target<<" not found ! "
        <<endl; 
    }else {
        cout<<" ✅ Item = "<<target<<" found at index = "<<foundIndex<<endl; 
    }

    int binaryIndex = binarySearch(values, size , target); 
    if(binaryIndex==-1)
        cout<<" ❌ Item = "<<target<<" not found !"<<endl; 
    else 
        cout<<" ✅ Item = "<<foundIndex<<" found at "
            <<binaryIndex
            <<endl; 
    return 0; 
}