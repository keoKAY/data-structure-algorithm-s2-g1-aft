#include<bits/stdc++.h>
using namespace std; 
 
// 1. finding max of deque 
int findMax(deque<int>values){
    auto max=values[0];
    for(const auto &val:values){
        if(max<val) max=val;
    }
    return max;
};
int main(){
    system("clear"); 
 deque<int>value={1,2,3,4,53,43,3};
 cout<<"Max of value is "<<findMax(value);

    return 0 ;
}