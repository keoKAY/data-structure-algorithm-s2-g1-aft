#include<bits/stdc++.h>
using namespace std; 
class Student{
    public: 
        int id; 
        string name; 
        string gender; 
        float score; 
        Student(int id , string name, 
            string gender , float score){
            this-> id = id; 
            this-> name  = name; 
            this-> gender = gender; 
            this-> score = score; 
        }
        void output(){
            cout<<"\n ---------Student Info--------- \n"; 
            cout<<"Student ID: "<<id<<endl; 
            cout<<"Student Name:"<<name<<endl; 
            cout<<"Student Gender: "<<gender<<endl; 
            cout<<"Student Score: "<<score<<endl; 
        }
}; 

int binarySearch(vector<Student>& students, int studentId){
    int low=0, high = students.size()-1; 
    while(low<=high){
        int mid = low + ( high - low )/2; 
        if(students[mid].id == studentId) return mid; 
        else if(studentId>students[mid].id) low=mid +1; 
        else high = mid -1 ; 
    }
    return -1; 
}
int main(){
    system("clear");
    // init list for demo purpose 
    vector<Student> students={
        Student(10001,"james","male",100), 
        Student(10056, "sokchea", "male",98), 
        Student(10061,"bopha","female",60), 
        Student(10076, "sothea", "male",98), 
        Student(10096, "visal", "male",78)
    }; 
    int target=100567; // studentId for searching 
    int index = binarySearch(students, target); 
    if(index == -1 )
        cout<<" 🔴 Student with ID = "<<target
            <<" Not found! "<<endl; 
    else {

        cout<<" ✅ Student with ID = "<<target
            <<" Found at index = "
            <<index<<endl;
        students[index].output(); 
    } 
    return 0 ; 

}