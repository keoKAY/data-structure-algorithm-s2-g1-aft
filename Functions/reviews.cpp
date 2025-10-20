#include<bits/stdc++.h>
using namespace std;

// Entrypoint of application 
// add bonus based on amount 
// <=500 add 35% bonus 
// >500 add 25% bonus 
float wageCalculator(float wage , float hour){
    float salary  = wage * hour; 
    // if(salary>500){
    //     // salary = salary + salary * 0.25; 
    //     salary += salary *0.25; 
    // }else {
    //     salary += salary * 0.35; 
    // }
    // return salary; 
    return (salary>500)?salary + salary*0.25: salary * 0.35;
}
const string USERNAME="admin"; 
const string PASSWORD="123"; 
// funtion sort ,search , delete , edit .... 
bool handleLogin(string username, string password ){
    return (username==USERNAME && PASSWORD == password); 
}

int main(){
    system("clear"); 
    float result = wageCalculator(100,10); 
    cout<<" 🟢 Result is : "<<result <<"$"<<endl;
    cout<<"Authentication Status : "<<endl;  


    if(handleLogin("admin", "123")){
        cout<<"login successfully ! ✅"<<endl; 
    }else {
        cout<<"Invalid credentials ❌"<<endl; 
    }
    return 0 ; 
}