// Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print the merged linked list elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 35 45

// Output:
// 10 15 20 25 30 35 40 45 50

// Explanation:
// Compare nodes of both lists, append smaller to result, continue until all nodes are merged.
#include <cstddef>
#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
struct node* head1=NULL;
struct node* head2=NULL;
struct node* head3=NULL;
struct node* tail1=NULL;
struct node* tail2=NULL;
struct node* tail3=NULL;

void create(int data,node*& head,node*& tail)
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
    int i,n1,n2,data;
    cout<<"Enter size of 1st sorted array: ";
    cin>>n1;
    cout<<"Enter the first sorted array: ";
    for(i=0;i<n1;i++)
    {
        cin>>data;
        create(data,head1,tail1);
    }
    cout<<"Enter size of secnd sorted array: ";
    cin>>n2;
    cout<<"Enter second sorted array: ";
    for(i=0;i<n2;i++)
    {
        cin>>data;
        create(data,head2,tail2);
    }
    while(head1!=NULL&&head2!=NULL)
    {
        if(head3==NULL)
        {
            if(head1->data<head2->data)
            {
                head3=head1;
                tail3=head1;
                head1=head1->next;
            }
            else 
            {
                head3=head2;
                tail3=head2;  
                head2=head2->next;
            }
        }
        else 
        {
            if(head1->data<head2->data)
            {
                tail3->next=head1;
                tail3=head1;
                head1=head1->next;
            }
            else 
            {
                tail3->next=head2;
                tail3=head2;
                head2=head2->next;
            }
        }
    }
    if(head1==NULL)
    {
        tail3->next=head2;
    }
    else 
    {
        tail3->next=head1;
    }
    cout<<"Merged sorted array is: ";
    display(head3);
    return 0;
}