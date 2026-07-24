// Problem: Circular Linked List Creation and Traversal - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the circular linked list elements starting from head, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

// Explanation:
// Last node's next points to head. Traverse from head until returning to head to avoid infinite loop.
#include <cstddef>
#include<iostream>

using namespace std;

struct node
{
    node* next;
    int data;
};
node* head=NULL;
node* tail=NULL;

void create(node*& head,node*& tail,int data)
{
    struct node* temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
    tail->next=head;
}

int main()
{
    int i,n,data;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter list: ";
    for(i=0;i<n;i++)
    {
        cin>>data;
        create(head,tail,data);
    }
    cout<<"The list is: ";
    node* temp=head;
    if(head==NULL)
    {
        return 0;
    }
    else 
    {
        do 
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        while (temp!=head);
    }
    return 0;
}