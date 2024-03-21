/*
HERE' WE WILL SEE HOW CAN WE INSERT THE DATA AT THE SPECIFIC
GIVEN POSITION
*/
#include <iostream>
using namespace std;
// function prototypes
void createNodeList();
void display();
void insertSpecific();
// class
class node
{
public:
    int data;
    node *next;
} *head, *tail, *newNode, *temp;
// main function
int main()
{
    createNodeList();
    display();
    insertSpecific();
    display();
    return 0;
}
// function definitions
int count = 0; // to count the elements in the node list
void createNodeList()
{
    head = 0;
    int choice = 1;
    while (choice)
    {
        newNode = new node;
        cout << "Enter integer value => ";
        cin >> newNode->data;
        newNode->next = 0;
        if (head == 0)
            head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        count++;
        cout << "To continue press 1 else 0 => ";
        cin >> choice;
    }
    tail = temp;
}
void display()
{
    temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertSpecific()
{
    int pos;
    cout << "/t/tInsert Value At Specific Position" << endl;
    cout << "Enter the position => ";
    cin >> pos;
    if (pos > count)
        cout << "Invalid Position" << endl;
    else
    {
        int i = 1;
        temp = head;
        newNode = new node;
        cout << "Enter the integer value => ";
        cin >> newNode->data;
        while (i < (pos - 1))
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}