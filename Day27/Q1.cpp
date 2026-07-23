// Problem: Find Intersection Point of Two Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print value of intersection node or 'No Intersection'

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 30 40 50

// Output:
// 30

// Explanation:
// Calculate lengths, advance pointer in longer list, traverse both simultaneously. First common node is intersection.
#include <cstddef>
#include<iostream>

using namespace std;

struct node
{
    node* next;
    int data;
};
node* head1=NULL;
node* tail1=NULL;
node* head2=NULL;
node* tail2=NULL;

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
    int i,n1,n2,data,k;
    cout<<"Enter size of 1st list: ";
    cin>>n1;
    cout<<"Enter 1st list: ";
    for(i=0;i<n1;i++)
    {
        cin>>data;
        create(head1,tail1,data);
    }
    cout<<"Enter size of 2nd list: ";
    cin>>n2;
    cout<<"Enter 2nd list: ";
    for(i=0;i<n2;i++)
    {
        cin>>data;
        create(head2,tail2,data);
    }
    cout<<"do u want to intersect the list enter (-1) for no intersection and index number from where u ant to index: ";
    cin>>k;
    i=k;
    if(i==-1)
    {
        cout<<"There is no intersection";
        return 0;
    }
    else 
    {
        if(k<0||k>=n1)
        {
            cout<<"Out of bounds index";
            return 0;
        }
        else 
        {
            node* ptr1=head1;
            while(i!=0)
            {
                ptr1=ptr1->next;
                i--;
            }
            tail2->next=ptr1;
        }
        node* ptr1=head1;
        node* ptr2=head2;
        int len1=n1;
        int len2=n2+(n1-k);
        if(len1>len2)
        {
            len1=len1-len2;
            while(len1!=0)
            {
                ptr1=ptr1->next;
                len1--;
            }
        }
        else 
        {
            len2=len2-len1;
            while(len2!=0)
            {
                ptr2=ptr2->next;
                len2--;
            }
        }
        while(ptr1!=NULL&&ptr2!=NULL)
        {
            if(ptr1==ptr2)
            {
                cout<<"The list intersect at element: "<<ptr1->data;
                return 0;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        cout<<"No intersection: ";
    }
    return 0;
}