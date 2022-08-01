import java.util.* ;
import java.io.*; 
/*************************************************************

    Following is the LinkedListNode class structure

    class LinkedListNode<T> {
	    T data;
	    LinkedListNode<T> next;
	    LinkedListNode<T> random;

	    public LinkedListNode(T data) {
		    this.data = data;
	    }
    }

*************************************************************/

public class CopyListWithRandomPointer {
	public static LinkedListNode<Integer> cloneRandomList(LinkedListNode<Integer> head) {
        LinkedListNode<Integer> itr = head, front = head;
        
        while(itr!= null){
            front = itr.next;
            LinkedListNode<Integer> copy = new LinkedListNode<Integer>(itr.data);
            itr.next = copy;
            copy.next = front;
            itr = front;
        }
        
        itr = head;
        while(itr!=null){
            if(itr.random != null)
                itr.next.random = itr.random.next;
            itr = itr.next.next;
        }
        
        itr = head;
        LinkedListNode<Integer> tmp = new LinkedListNode<Integer>(0);
        LinkedListNode<Integer> copy = tmp;
        
        while(itr!=null){
            front = itr.next.next;
            copy.next = itr.next;
            copy = copy.next;
            itr.next = front;
            itr = front;
        }
        return tmp.next;
	}
}
