#include<iostream>
#include<chrono> // when you work with times , we use chrono
using namespace std; 
using namespace std::chrono; 

typedef long long ll; 
// typedef int Age; 
// Age yearsold; 


// O(n)
ll sumV1(ll n ){
    // start time 
    auto startTime = high_resolution_clock::now(); 
    ll sum = 0; 
    for(ll i = 0; i<=n; i++){
        sum = sum + i; 
    }

    // end time 
    auto endTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(endTime - startTime); 
    cout<<"Execution time #1 🕥 : "<<duration.count()<<" microseconds"<<endl;  
   
    return sum; 
}

// O(1) => constant 
ll sumV2(ll n ){
    auto startTime = high_resolution_clock::now(); 
    ll sum = (n*(n+1))/2; 
    auto endTime = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(endTime-startTime); 
    cout<<"Execution Time #2 🕥 : "<<duration.count()<<" microseconds "<<endl; 
    return sum; 
}

int main(){
    system("clear"); 
    ll value = 1000000000; 

    ll result1= sumV1(value); 
    ll result2=sumV2(value);
    cout<<"Result sumV1 = "<<result1<<endl; 
    cout<<"Result sumV2 = "<<result2<<endl; 
    return 0; 
}