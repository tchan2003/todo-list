#include <iostream>
#include <string>
#include "LinkedList.h"

void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Add Task\n";
    cout << "2. Delete Task\n";
    cout << "3. Display Tasks\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    LinkedList todoList;
    string task;
    int choice;
    int taskIndex;

    while (true) {
        displayMenu();
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1: // add Task
                cout << "Enter a task: ";
                getline(std::cin, task);
                todoList.addTask(task);
                break;
            case 2: // delete Task
                cout << "Enter task index to delete: ";
                cin >> taskIndex;
                todoList.deleteTask(taskIndex);
                cin.ignore(); 
                break;
            case 3: // display Tasks
                todoList.displayTasks();
                break;
            case 4: // exit
                todoList.displayTasks();
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
