/*
Problem Statement:
Given the head of the Singly Linked list, Reverse the list, return the head of the reversed list

Input:
0->1->2->3->NULL

Output: 
3->2->1->0->NULL

methods:
iterative approach:
we use 3 pointers:
nextt pointer:
keeps track or the reference of the next node linkedlist
prev pointer:
keep track of prev node of current, basically used to reverse
curr pointer : 
keep track of current node

approach:
initial initialization:
prev and nextt are nullptr
curr is pointing to head

while loop till current points to NULL(ie, basically the end of the linked list)

nextt = curr->next // we can keep track of the next nodes, because when we reverse the LL, the linked list chain is broken, hence it's reference is broken, hence it is essential to store it.

curr->next = prev // reversing logic, ex: 1->2->3->NULL, curr points to 1, nextt points to 2, prev points to Null, now, in the reversed LL, 1 is the last element, hence it's next would be null., then when curr points to 2, nextt points to 3, prev points to 1, hence we can reverse it

prev = curr
curr = next

these lines are basically to advance the pointers or move the pointers to the next node
once curr reaches NULL, then prev would be pointing to 3 or Tail of original LL, hence if we return it as head, it will be head of the Reverse LL


TIME COMPLEXITY : O(N)
SPACE COMPLEXITY : O(1)
*/

#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;

    // Constructors
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nextt = nullptr;

        while (curr != nullptr) {
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }
        return prev;
    }
};

// Utility function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Utility function to create a linked list from array
ListNode* createList(const int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}

int main() {
    // Example input: linked list with values 1 -> 2 -> 3 -> 4 -> 5
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createList(arr, n);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    ListNode* reversedHead = sol.reverseList(head);

    cout << "Reversed List: ";
    printList(reversedHead);

    return 0;
}

