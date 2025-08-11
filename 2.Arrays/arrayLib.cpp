#include<iostream> 
#include<array> // used built-in static array 
using namespace std; 
int main(){
    system("clear"); 

    array<int , 5> array = {45,66,77,88,11}; 
    cout<<" 1️⃣ First element is : "<<array[0]<<endl; 
    cout<<" 2️⃣ At element 2 : "<<array.at(2)<<endl; 
    cout<<"Total size of the array : "<<array.size()<<endl;

    // for loop is used to iterate the array 
    cout <<"\n🔥 1. using iterators for loop the element: "<<endl; 
    for(auto it = array.begin(); it!=array.end(); it++){
        cout<<" "<<(*it); 
    }
    cout<<endl; 

    // using range-based loop 
    cout<<"\n 👍 2. Using range based style (for each ):"<<endl; 
    for(const auto &val : array){
        cout<<" "<<val; 
    }
    cout<<endl; 
    return 0 ; 
}