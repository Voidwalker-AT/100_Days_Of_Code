// roblem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer key

// Output:
// - Print the linked list elements after deletion, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// 10 20 40 50

// Explanation:
// Traverse list, find first node with key, remove it by adjusting previous node's next pointer.

#include <cstddef>
#include <iostream>
#include <iterator>
#include <type_traits>

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
    int n,i,k=0,data;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>data;
        create(head,tail,data);
    }
    cout<<"Enter key to be removed: ";
    cin>>k;
    struct node* temp=head;
    struct node* del=NULL;
    if(head!=NULL&&head->data==k)
    {
        del=head;
        head=del->next;
        delete del;
    }
    else
    {
        while(temp!=NULL&& temp->next!=NULL)
        {
            if(temp->next->data==k) 
            { 
                del=temp->next; 
                temp->next=del->next; 
                delete del; 
                break; 
            } 
            temp=temp->next;
        }        
    }
    temp=head;
    cout<<"Final list is: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}