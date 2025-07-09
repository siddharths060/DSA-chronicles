#include <iostream>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Merge two sorted linked lists using new keyword and struct
Node* mergeSortedLists(Node* head1, Node* head2) {
    // Create dummy node using new
    Node* dummy = new Node(0);
    Node* tail = dummy;

    Node* left = head1;
    Node* right = head2;

    while (left != nullptr && right != nullptr) {
        if (left->data <= right->data) {
            tail->next = left;
            left = left->next;
        } else {
            tail->next = right;
            right = right->next;
        }
        tail = tail->next;
    }

    // Append remaining part
    if (left != nullptr) tail->next = left;
    else tail->next = right;

    Node* result = dummy->next;
    delete dummy;  // Free the dummy node
    return result;
}

// Helper to insert a list from array
Node* buildList(int arr[], int n) {
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; ++i) {
        Node* newNode = new Node(arr[i]);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Helper to print a linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    Node* list1 = buildList(arr1, 3);
    Node* list2 = buildList(arr2, 3);

    Node* merged = mergeSortedLists(list1, list2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}

