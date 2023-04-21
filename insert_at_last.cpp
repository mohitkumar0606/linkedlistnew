#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        this->next= NULL;

    }

};

void insertAtHead(Node* &head, int data){
    Node *temp = new Node(data);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void insertAtTail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail= temp;

}

void insertAtMiddle(Node* &head,int position, int data){
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    Node* nodetoinsert= new Node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}





int main(){
    Node* node1= new Node(10);
    Node* head=node1;
    // print(head);
    // insertAtHead(head,6);
    // print(head);
    // insertAtHead(head,21);
    // print(head);
    Node* tail= node1;
    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,22);

    
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;
    
    // print(head);

    // insertAtMiddle(head,3,21);
    // print(head);

    
    print(head);








}