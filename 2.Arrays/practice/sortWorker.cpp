#include<bits/stdc++.h>
using namespace std; 
// class -> blueprint 
// object -> instance created from blueprint
class Worker{
    public: 
        int id; 
        string name; 
        string gender; 
        float salary; 
        // Constructor 
        Worker(int id, string name, string gender, float salary){
            this-> id = id; 
            this-> name = name; 
            this-> gender = gender; 
            this-> salary = salary; 
        }
        // function member 
        void showInfo(){
            cout<<" "<<"ID: "<<id<<", Name="<<name<<", Gender="<<gender<<", "<<salary<<"$"<<endl; 
        }

}; 
// 1. create function to init vector of workers 
vector<Worker> getAllWorkers(){

    vector<Worker> allWorkers={
        Worker(1009,"james","male" ,500), 
        Worker(1001,"bona","male",350),
        Worker(1021,"koko","female",650),
        Worker(1002,"Jariya","female",600),
        Worker(1002,"rita","female",610)
    }; 
    return allWorkers; 

}
// util: for print all workers 
void printAllWorkers(
    vector<Worker>&workers ,
     string message ){
    cout<<"[------------"<<message<<"----------]"<<endl; 
    for(auto person: workers)
        person.showInfo(); 
    cout<<endl ; 
}
// 2. create function to sort all workers by id (ASC)
void sortWorkerById(vector<Worker>&workers){
    for(int i=0 ; i<workers.size(); i++){
        for(int j = 0; j<workers.size()-1-i; j++){
            if(workers[j].id>workers[j+1].id){
                swap(workers[j],workers[j+1]); 
            }
        }
    }
}

// 3. create a function to sort worker by id ( asc , desc )
void sortWorkerById(vector<Worker>&workers, bool isAsc){
    for(int i=0 ; i<workers.size(); i++){
        for(int j = 0; j<workers.size()-1-i; j++){
            //
            auto condition= isAsc?
                (workers[j].id>workers[j+1].id)
                : 
                (workers[j].id<workers[j+1].id); 

            if(condition){
                swap(workers[j],workers[j+1]); 
            }
        }
    }
}
// 4. create a function to sort worker by everything 
void sortWorker(
    vector<Worker>&workers ,
    function<bool(Worker&, Worker&)> comparator ){
        for(int i = 0; i<workers.size(); i++){
            for(int j = 0; j<workers.size()-i-1; j++){
                if(comparator(workers[j], workers[j+1])){
                    swap(workers[j], workers[j+1]); 
                }
            }
        }
}
// create comparators 
bool byWorkerIdAsc(Worker worker1, Worker worker2){
    return worker1.id  > worker2.id ; 
}
bool byWorkerIdDesc(Worker worker1, Worker worker2){
    return worker1.id  < worker2.id ; 
}
bool byWorkerSalaryDesc(Worker worker1, Worker worker2){
    return worker1.salary  < worker2.salary ; 
}
int main(){
    system("clear"); 
    vector<Worker> allWorker = getAllWorkers();
    printAllWorkers(allWorker," All Workers before sort "); 
    //sortWorkerById(allWorker, false); 
    sortWorker(allWorker, byWorkerSalaryDesc); 
    printAllWorkers(allWorker," All Workers after sort by id "); 
    return 0; 
}