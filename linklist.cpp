#include<iostream>
using namespace std;


  class Node{
      public:
      int data;
     Node *next;
  };

// This function prints contents of linked list
// starting from the given node
  void printList(Node *n){
      while (n!=NULL)
      {
          cout<<n->data<<" ";
          n=n->next;
      }
      
  }

int main(){
    Node* head;
    Node* second;
    Node* third;
    Node* four;
// allocate 4 nodes in the heap
    head = new Node();
    second= new Node();
    third = new Node();
    four = new Node();
    
    head->data=7;// assign data in first node
    head->next=second;// Link first node with second

    second->data=11;
    second->next=third;

    third->data=45;
    third->next=four;

    four->data=54;
    four->next=NULL;

    printList(head);

    return 0;
}