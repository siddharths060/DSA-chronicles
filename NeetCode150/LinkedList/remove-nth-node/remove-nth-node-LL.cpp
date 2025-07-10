

#include<iostream>
#include<vector>

using namespace std;

class Node
{
public: 
int data;
Node* next;

Node(int data){
this->data = data;
next = nullptr;
}

Node(int data, Node* next){
this->data = data;
next = nullptr;
}

};

void traverse(Node* head)
{
if(head == nullptr){
cout<<"no elements"<<endl;
return;
}
Node* curr = head;
while(curr != nullptr){
cout<<curr->data<<" ";
curr = curr->next;
}
cout<<endl;


Node* convertToLL(vector<int> &arr){

	if(arr.size() == 0 ){
		cout<<"no elements in array"<<endl;
		return nullptr;
	}
	Node* head = nullptr;
	Node* tail = nullptr;

	for(int i = 0; i < arr.size(); i++){
		Node* newNode = new Node(arr[i]);
		if(head == nullptr){
			head = newNode;
			tail = newNode;

		}
		else{
			tail->next = newNode;
			tail = tail->next; // incrementing tail we can also do it this way, tail = newNode
		}

		
	}

	return head;	
}


void removeNthNode(Node* head){
Node* curr = head;
int count = 0;

while(curr!=nullptr){
count++;
curr = curr->next;
}

cout<<count<<endl;

cout<<curr->data<<endl;

}


int main(){
vector<int> arr = {0,1,2,3,4,5};
Node* head = convertToLL(arr);
traverse(head);

return 0;
}
