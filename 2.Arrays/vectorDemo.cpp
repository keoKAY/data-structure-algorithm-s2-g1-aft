#include<iostream>
#include<vector> 
using namespace std;
// Vector is a better choice if you want to work with dynamic array  
 
int  main(){
    system("clear");
    // declare vector 
    vector<int> vec1; 
    vector<int> vec2(5); // there 5 element in total ( all item are zero )
    vector<int> vec3(5,10); // declare and init value 10 for all emenets 

    vector<int> vec4 = {34,44,55,66}; 
    // adding more values into the vector 

    vec3.push_back(99); // add value 
    vec3.push_back(111);// add more value 
    cout<<"Print all value fo vector2 : "<<endl; 
    for(int i = 0; i<vec3.size(); i++){
        cout<<" "<<vec3[i]; 
    }
    return 0 ; 

}