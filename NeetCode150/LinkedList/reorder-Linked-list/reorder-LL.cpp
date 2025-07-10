/*
 * Order Linked Lists
 * Approach 1 : add or insert the LL node's into an array or vector, then reorder them to match the reordered Linkedlist node, 
 * we can reorder them as: 
 * left = 0; right = arr.size() -1;
 * while(left <  right){
 * arr[left]->next = arr[right];
 * left++;
 * if(left == right) break;
 * arr[right]->next = arr[left];
 * left--;
 * }
 *
 * TIME COMPLEXITY = O(N)
 * SPACE COMPLEXITY = O(N)
 *
 * approach 2 : this method contains three steps:
 * step -1 : find the middle elements using two pointers slow and fast
 * where slow moves in increments of one and fast moves in increments of two
 *
 * ie, 
 * ListNode* slow = head, *fast = head;
 * while(fast!=nullptr && fast->next != nullptr){
 * 	slow = slow->next;
 * 	fast = fast->next->next;
 * }
 *  assign mid to slow->next
 *  ie, mid = slow
 *
 * step 2 : reverse the nodes of the linked list after the middle element
 *
 * ListNode* prev = nullptr;
 * curr = slow->next
 * while(curr != nullptr){
 * ListNode* next = curr->next;
 * curr->next = prev;
 * prev = curr;
 * curr = next;
 * }
 * slow->next = nullptr; // it will be pointing to the last node of the reorderd list 
 * 
 *
 * step 3 : merge the nodes to form the correct order
 *
 * ListNode* first = head;
 * ListNode* second = prev; // it will be pointing to the last node
 *
 * we need to run the loop till either first reaches nullptr or second reaches nullptr, but typically second is smaller, hence it reaches null faster
 * while(second!=nullptr){
 *	ListNode* temp1 = first->next; //keep track of first's next node
 *	ListNOde* temp2 = second->next; // keep track of second's next node
 *	first->next = second;
 *	second->next = temp2;
 *
 *	first = temp1;
 *	second = temp2;
 *
 * }
 * *
 */ 



	void reorder(Node* head){
	
		// step 1 : find the middle element using the slow and fast pointer
		Node* slow = head;
		Node* fast = head;
		while(fast!=nullptr && fast->next!=nullptr){
			slow = slow->next; // increments by 1
			fast = fast->next->next; // increments by 2
		}

		Node* curr = slow->next;
		slow->next = nullptr; // finally the slow->next pointer will be the last node hence it's next should be pointing to null

		// step 2 : reverse the nodes after the middle element
		Node* prev = nullptr;
		while(curr != nullptr){
		Node* next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		}


		//step 3 : merge the first part and the second part

		Node* first = head;
		Node* second = prev;
		while(second!=nullptr){
			Node* temp1 = first->next;
			Node* temp2 = second->next;
			
			first->next = second;
			second->next = temp1;

			first = temp1;
			second = temp2;
		}
	}
