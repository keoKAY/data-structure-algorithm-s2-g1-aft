#include<iostream> 
using namespace std; 
// allocate vs deallocate 
int main(){
    system("clear"); 
    int values[]={34,33,34,66}; 
    int values2[4]={34,33,34,66}; 
    // 2D array -> like a table
    // int name[row][col]; 
    int matrix[3][4]; // row = 3 , col = 4 
    // Uniform Initialization 
    // Modern syntax declarastion for CPP (start from C++11)
    int arrays[]{45,67,8,9}; 

    return 0; 
}