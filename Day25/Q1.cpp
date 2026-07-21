// Problem: Count Occurrences of an Element in Linked List - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of nodes)
// - Second line: n space-separated integers (linked list elements)
// - Third line: integer key (element to be counted)

// Output:
// - Print the number of times the key appears in the linked list

// Example:
// Input:
// 6
// 10 20 30 20 40 20
// 20

// Output:
// 3

// Explanation:
// Traverse the linked list from head to end. Each time a node's data matches the given key, increment a counter. After traversal, print the final count.
#include <cstddef>
#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};
struct node* head=NULL;
struct node* tail=NULL;

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
}

int main()
{
    int i,n,data,cnt=0,k;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter list: ";
    for(i=0;i<n;i++)
    {
        cin>>data;
        create(head,tail,data);
    }
    cout<<"Enter element to count: ";
    cin>>k;
    struct node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==k)
        {
            cnt++;
        }
        temp=temp->next;
    }
    cout<<"total number of times element appeared is: "<<cnt;
    return 0;
}