#include "LinkedList.h"
using namespace std;
#include <iostream>

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::~LinkedList(){
    Node* current = head;
    while(current != nullptr)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}

void LinkedList::addTask(const string& task){
    Node* addedTask = new Node();
    addedTask->data = task;
    addedTask->next = nullptr;

    if(head == nullptr)
    {
        head = addedTask;
    }
    else
    {
        Node* current = head;
        while(current->next != nullptr)
        {
            current = current->next;
        }
        current->next = addedTask;
    }
}

void LinkedList::deleteTask(int index){
    if(head == nullptr || index == 0)
    {
        return;
    }

    if(index == 0)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    for(int i = 0; (i < index - 1) && (current != nullptr); i++)
    {
        current = current->next;
    }

    if(current == nullptr || current->next == nullptr)
    {
        return;
    }

    Node* deletion = current->next;
    current->next = deletion->next;
    delete deletion;
}

void LinkedList::displayTasks() const
{
    Node* current = head;
    int count = 0;
    while(current != nullptr)
    {
        cout << count << ". " << current->data << endl;
        current = current->next;
        count++;
    }
}
