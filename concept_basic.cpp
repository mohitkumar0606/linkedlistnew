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
    cout<<temp<<endl;
    temp->next=head;
    head=temp->next;
    cout<<temp<<endl;


}



int main(){

    // creating new node
    Node* node1= new Node(10);
    Node* head= node1;
    cout<<head->data<<endl;
    cout<<head<<endl;
    insertAtHead(head,6);
    cout<<head->data<<endl;
    cout<<head<<endl;
    cout<<head->next<<endl;



}