#include<iostream>
using namespace std;

struct ListNode {
    int dataValue;
    ListNode *nextNode;
};

ListNode *listHead = NULL;

void insertNode(int newValue)
{
    ListNode *newNode = new ListNode;
    newNode->dataValue = newValue;
    newNode->nextNode = listHead;
    listHead = newNode;
}

void deleteFirstNode()
{
    if (listHead == NULL)
    {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    ListNode *tempNode = listHead;
    listHead = listHead->nextNode;
    delete tempNode;
}

void deleteLastNode()
{
    if (listHead == NULL)
    {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    if (listHead->nextNode == NULL)
    {
        delete listHead;
        listHead = NULL;
        return;
    }
    ListNode *tempNode = listHead;
    while (tempNode->nextNode->nextNode != NULL)
    {
        tempNode = tempNode->nextNode;
    }
    delete tempNode->nextNode;
    tempNode->nextNode = NULL;
    return;
}

void deleteNodeAtPosition(int position)
{
    if (listHead == NULL)
    {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    ListNode *tempNode = listHead;
    if (position == 1)
    {
        listHead = tempNode->nextNode;
        delete tempNode;
        return;
    }
    int currentPosition = 1;
    while (tempNode != NULL && currentPosition < position - 1)
    {
        tempNode = tempNode->nextNode;
        currentPosition++;
    }
    if (tempNode == NULL || tempNode->nextNode == NULL)
    {
        cout << "Position " << position << " does not exist in the list." << endl;
        return;
    }
    ListNode *nextNode = tempNode->nextNode->nextNode;
    delete tempNode->nextNode;
    tempNode->nextNode = nextNode;
}

void printList()
{
    cout << "Data elements in single linked list are: ";
    ListNode *tempNode = listHead;
    while (tempNode != NULL)
    {
        cout << tempNode->dataValue << " ";
        tempNode = tempNode->nextNode;
    }
    cout << endl;
}

int main()
{
    insertNode(5);
    insertNode(4);
    insertNode(3);
    insertNode(2);
    insertNode(1);
    deleteFirstNode();
    deleteLastNode();
    deleteNodeAtPosition(2);
    printList();
    return 0;
}