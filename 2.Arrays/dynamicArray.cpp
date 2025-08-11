#include<iostream> 
using namespace std; 
// Static Array store value inside the Stack space
// When using Stack , it out of scope -> auto remove ! 

// Dynamic array store value inside the Heap space 
    // If you create dynamic primitively , you have to manually manage the memory by yourself 
int main(){
    system("clear"); 
    int n ; 
    cout<<"Enter n (size of array ): "; 
    cin>>n; 

    // Allocate n size memory for arrays 
    int* array = new int(n); // new -> allocate space memroy inside heap 

    // Logic to give value to all element
    // n = 5 
    // 0 2 4 6 8 
    for(int i = 0; i<n ; i++){
        array[i]= i* 2; 
    }


    // print the value of array 
    for(int i = 0; i<n; i++){
        cout<<array[i]<<" "; 
    }
    cout<<endl; 

    // deallcate the memory that we have allocated 
    delete[] array; 
    return 0 ; 
}

// Competitive Programming 
// Coding Challenges 