#include<bits/stdc++.h>
using namespace std; 

class Person{
    public: 
        string name; 
        int age; 
        string gender; 
        // Person(string name, int age , string gender){
        //     this->name = name; 
        //     this -> age = age ; 
        //     this -> gender = gender; 
        // }
        Person(string
             name , int age , string gender): name(name), age(age), gender(gender){}
        void showInfo(){
            cout<<"Name = "<<name<< " ,Gender = "<<gender
                <<" ,Age = "<<age<<endl; 
        }
    }
;

// comparator implmentation 
struct AgeComparator {
    bool operator()( const Person& p1 , const Person& p2)
    {
        return p1.age > p2.age; 
    }
};
int main(){
    system("clear"); 
    Person p1("james",23,"male"); 
    Person p2("john",43,"male"); 
    Person p3("susan",  19,"female"); 
    Person p4("susuki",63,"male"); 
    Person p5("jonathan",13,"male"); 

    // comparator tell what is the priority of the element 
    // name ? , gender ? or age 
    // we will choose age for the priority 
    priority_queue<Person, vector<Person>, AgeComparator> pq; 
    pq.push(p1); 
    pq.push(p2); 
    pq.push(p3); 
    pq.push(p4); 
    pq.push(p5); 

    while(!pq.empty()){
       auto person =  pq.top(); 
        person.showInfo(); 
        pq.pop(); 
    }
    return 0 ; 
}