//Structure of linked list Node
class Node {
    int data;
    Node next;
    Node(int val) {
        data = val;
        next = null;
    }
}
class Solution 
{
    public static void removeLoop(Node head) 
    {
        Node slow=head;
        Node fast=head;
        boolean t=false;
        while(fast!=null&&fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next.next;
            if(slow==fast)
            {
                t=true;
                break;
            }
        }
        if(t)
        {
            Node ptr=head;
            while(ptr!=slow)
            {
                ptr=ptr.next;
                slow=slow.next;
            }
            if(ptr==head)
            {
                while(slow.next!=head)
                {
                    slow=slow.next;
                }
                slow.next=null;
            }
            else
            {
                while(slow.next!=ptr)
                {
                    slow=slow.next;    
                }
                slow.next=null;
            }
        }
    }
}