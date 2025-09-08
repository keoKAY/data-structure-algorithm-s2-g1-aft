#include<bits/stdc++.h>
using namespace std; 


class HistoryRecord{
    private: 
        stack<string> history; 
    public: 
        stack<string> getHistory(){
            return history; 
        }
        void saveHistory(string item ){
            // cout<<"Adding item = "
            //     <<item<<" to history record . "
            //     <<endl; 
            history.push(item); 
        }
        void removeHistory(){
            if(history.empty()){
                cout<<"There is no histories to delete !"
                    <<endl; 
                return ;      
            }
            cout<<"Removing item: "
                <<history.top()
                <<endl; 
            //cout<<"Are you sure ? Y/N : "; 
            history.pop();
        }
}; 
// Display all histories 
void displayHistory(stack<string> history){
    int counter=0; 
    while(!history.empty()){
        cout<<(++counter)<<". " <<history.top()<<endl;
        history.pop();
    }

}
// Make it become a program 
// 1. Add history 
// 2. Remove history 
// 3. Show all histories 
// 4. Exit 
int main(){
    system("clear"); 
    HistoryRecord records; 
    // create 10 history 
    for(int i = 1; i<=10; i++){ 
         records.saveHistory("history #00"+to_string(i));
        }
    displayHistory(records.getHistory()); 
    records.removeHistory();
    records.removeHistory();
    records.removeHistory();
    displayHistory(records.getHistory()); 
    
    return 0; 
}