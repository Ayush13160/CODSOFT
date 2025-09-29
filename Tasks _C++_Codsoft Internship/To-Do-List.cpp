#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    vector<string>tasks;
    vector<bool>completed;
    int choice;

    while(true){
        cout<<"\n---To Do List---\n";
        cout<<"1. Add Tasks\n";
        cout<<"2. View Tasks\n";
        cout<<"3. Mark Task as Completed\n";
        cout<<"4. Remove Tasks\n";
        cout<<"5. Exit\n";
        cout<<"\nEnter choice: ";
        cin>>choice;
        cin.ignore();
    
        if(choice==1){
            string task;
            cout<<"\nEnter a Task to Add: ";
            getline(cin,task);
            tasks.push_back(task);
            completed.push_back(false);
        }

        else if(choice==2){
            if(tasks.empty()){
                cout<<"No Tasks\n";
            }
            else{
                for(int i=0;i<tasks.size();i++){
                    cout<<i+1<<"."<<tasks[i]<< (completed[i] ? " (Done)" : " (Pending)") << "\n";
                }
            }
        }

        else if(choice==3){
            int n;
            cout<<"\nEnter task number: ";
            cin>>n;
            if(n>0 && n<=tasks.size()){
                completed[n-1]=true;
            }
            else{
                cout<<"Invalid Number!\n";
            }
        }

        else if(choice==4){
            int n;
            cout<<"\nEnter task number!: ";
            cin>>n;
            if(n>0 && n<=tasks.size()){
                tasks.erase(tasks.begin() + (n-1));
                completed.erase(completed.begin() + (n-1));
            }
            else{
                cout<<"Invalid Number!\n";
            }
        }


        else if(choice==5){
            cout<<"Goodbye!\n";
            break;
        }

        else{
            cout<<"Invalid Number!\n";
        }
    }
}
