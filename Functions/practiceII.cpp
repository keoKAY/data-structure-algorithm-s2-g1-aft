#include<bits/stdc++.h>
using namespace std; 

// money exchange function 
// usd -> khr , khr -> usd 
// rate = 4000 
long exChangeRate(long amout, string type){
    double rate = 4000; 
    return(type == "usd") ? amout * rate : amout/ rate; 
}
int main(){

    system("clear"); 
    cout<<"Money Exchange from USD to Khr is :"<<exChangeRate(100 ,"usd")<<"khr" <<endl;
    cout<<"Money Exchange from khr to USD is :"<<exChangeRate(100000 ,"khr")<<"USD" <<endl;

    return 0; 
}