#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
     queue<string> taskQueue; 
    int choice;              
    string task;             

    do {
        
        cout << "\nTask Scheduler Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. Display Number of Tasks\n";
        cout << "3. Display Next Task\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
    
                cout << "Enter task description: ";
                cin.ignore();  
                getline(cin, task);
                taskQueue.push(task);
                cout << "Task added successfully!\n";
                break;

            case 2:
                
                cout << "Number of tasks: " << taskQueue.size() << endl;
                break;

            case 3:
                
                if (!taskQueue.empty()) {
                    cout << "Next task in queue: " << taskQueue.front() << endl;
                } else {
                    cout << "No tasks in the queue." << endl;
                }
                break;

            

            default:
                
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 3);

    return 0;
}