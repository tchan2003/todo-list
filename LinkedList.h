using namespace std;
#include <iostream>

struct Node{
    string data;
    Node* next;
};

class LinkedList{
    private:
    Node* head;
    public:
    LinkedList();
    ~LinkedList();
    void addTask(const string& task);
    void deleteTask(int index);
    void displayTasks() const;
};