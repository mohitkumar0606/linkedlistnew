#include<bits/stdc++.h>
using namespace std;

// basic node structure
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next =NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp= new Node(data);
    temp->next = head;
    head=temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtMiddle(Node* &head,Node* &tail, int position, int data){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    
    if(temp==NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* nodetoinsert= new Node(data);
    nodetoinsert->next =temp->next;
    temp->next=nodetoinsert;
}



// traversal in list
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int main(){
    
    // dynamically node creation in heap memory
    Node* node1 = new Node(21);
    Node *head= node1;
    print(head);
   insertAtHead(head,23);
   print(head);
   Node* tail= node1;
   insertAtTail(tail,10);
   insertAtTail(tail,5);
   print(head);
   
//   insertAtMiddle(head,3,28);
//   print(head);
   
//   insertAtMiddle(head,1,9);
//   print(head);
   
   insertAtMiddle(tail,head,5,9);
   print(head);
    // Node* node3 = new Node(5);
    // Node* node4 = new Node(6);
    // Node* node5 = new Node(10);
    
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    
    
}