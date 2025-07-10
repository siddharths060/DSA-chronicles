class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* sizePointer = head;
        while(sizePointer != nullptr){
            size++;
            sizePointer = sizePointer->next;
        }

        // if n is larger than size, just return head (invalid input)
        if(n > size){
            return head;
        } 

        // if we're deleting the head
        if(n == size){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int count = 0;
        ListNode* curr = head;
        while(count < size - n - 1){
            curr = curr->next;
            count++;
        }

        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;

        return head;
    }
};

