// Problem: Count Nodes in Linked List

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the result

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50
#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};
struct node *head=NULL;
int main()
{
    int i,data,n,cnt=0;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter nodes: ";
    node* tail=NULL;
    for(i=0;i<n;i++)
    {
        cin>>data;
        if(head==NULL)
        {
            node* newnode=new node;
            newnode->data=data;
            newnode->next=NULL;
            head=newnode;
            tail=newnode;
        }
        else 
        {
            node* newnode=new node;
            newnode->data=data;
            newnode->next=NULL;
            tail->next=newnode;
            tail=newnode;
        }
    }
    cout<<"The nodes are: ";
    node* temp=head;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    cout<<cnt;
    return 0;
}