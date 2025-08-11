#include<iostream> 
#include<vector>
using namespace std; 
// Space Complexity = O(1)
// Time Comlexity = O(n^2)
void printPairs(vector<int>& arr ){
    
    for(int i = 0; i<arr.size(); i++){
        //cout<<" ➡️"<<endl; 
        for(int j = 0; j<arr.size(); j++){
            cout<<" "<<arr[i]<<"  "<<arr[j]<<endl;  
        }
        cout<<endl; 
    }
}
int main(){
    system("clear"); 
    vector<int> array = {11,12,44}; 
    printPairs(array); 
    return 0; 
}