// Problem: Doubly Linked List Insertion and Traversal - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the linked list elements in forward order, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

// Explanation:
// Each node has data, next, prev. Insert nodes sequentially, traverse from head using next pointer.
#include <cstddef>
#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
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
        temp->prev=NULL;
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    int i,n,data;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter list: ";
    for(i=0;i<n;i++)
    {
        cin>>data;
        create(head,tail,data);
    }
    display(head);
    return 0;
}
