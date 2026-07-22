//Design linked list-leetcode
class MyLinkedList 
{
    class node
        {
            int val;
            node next;

            node(int val)
            {
                this.val=val;
                next=null;
            }
        }
        node head;
        node tail;
        int size;

    public MyLinkedList() 
    {
        head=null;
        tail=null;
        size=0;
    }
    
    public int get(int index) 
    {
        int r=0;
        node temp=head;
        if(index<0||index>=size)
        {
            return -1;
        }
        else
        {
            while(r!=index)
            {
                temp=temp.next;
                r++;
            }
            return temp.val;
        }
    }
    
    public void addAtHead(int val) 
    {
        node temp= new node(val);
        if(head==null)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            temp.next=head;
            head=temp;
        }
        size++;
    }
    
    public void addAtTail(int val) 
    {
        node temp=new node(val);
        if(tail==null)
        {
            tail=temp;
            head=temp;
        }
        else
        {
            tail.next=temp;
            tail=temp;
        }
        size++;
    }
    
    public void addAtIndex(int index, int val) 
    {
        int r=0;
        node ptr=head;
        node temp= new node(val);
        if(index<0||index>size)
        {
            return;
        }
        else if(index==0)
        {
            addAtHead(val);
            return;
        }
        else if(index==size)
        {
            addAtTail(val);
            return;
        }
        else
        {
            while(r!=index-1)
            {
                ptr=ptr.next;
                r++;
            }  
            temp.next=ptr.next;
            ptr.next=temp;
            size++;
        }
    }
    
    public void deleteAtIndex(int index) 
    {
        int r=0;
        node ptr=head;
        if(index<0||index>=size)
            {
                return;
            }
        else if(index==0)
        {
            if(head.next!=null)
            {
                head=head.next;
                size--;
            }
            else
            {
                head=null;
                tail=null;
                size--;
            }
        }
        else
        {
            while(r!=index-1)
            {
                ptr=ptr.next;
                r++;
            }
            if(ptr.next==tail)
            {
                tail=ptr;
            }
            ptr.next=ptr.next.next;
            size--;
        }
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */