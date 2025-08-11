#include<iostream>
using namespace std; 

int main(){
    system("clear"); 
    int values[]={12,34,56,22}; 

    // loop for print all element 
    cout<<"🟢 Printing 1D Array : "<<endl; 
    for(auto val : values ){
        cout<<" "<<val;
    }
    cout<<endl; 

    int numTable[2][3]={
        {4, 5, 45}, 
        {8,9 ,1}
    }; 

    cout<<"🟢 Printing 2D array: "<<endl; 
    for ( int row = 0; row<2; row ++){
        cout<<"Row "<<(row + 1 )<<" : "; 
        for(int col = 0; col<3; col++){
            cout << " "<<numTable[row][col]; 
        }
        cout<<endl; 
    }
    return 0; 
}