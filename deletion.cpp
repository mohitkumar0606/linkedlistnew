#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;

    }

};

void insertAtHead(Node* &head, int data){
    Node* temp= new Node(data);
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
    // tail=temp;
    tail=tail->next;

}

void insertAtMiddle(Node* &head, Node* &tail,int position, int data){
    if(position==1){
        insertAtHead(head,data);
        return;
    }


    Node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
    }

    Node *nodetoinsert= new Node(data);
   
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}

void deleteNode(Node* &head, int position){
    // deleting first node
    if(position==1){
        Node* temp= head;
        head= head->next;
        temp->next=NULL;
        delete(temp);
    }
    else{

        int count=1;
        Node* current= head;
        Node* previous= NULL;
        while(count<position){
            previous=current;
            current=current->next;
            count++;
        }   
        previous->next= current->next;
        current->next =NULL;
        delete(current);

    }
}


int main(){

    // creating new node
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail= node1;
    
    insertAtHead(head,6);
    // print(head);
    insertAtTail(tail,21);
    // print(head);

    // insertAtMiddle(head,3,23);
    insertAtMiddle(head,tail,3,5);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;


    print(head);
    deleteNode(head,3);
    print(head);

    



}