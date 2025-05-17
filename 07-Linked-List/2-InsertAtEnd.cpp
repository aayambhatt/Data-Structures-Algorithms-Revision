#include<iostream>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};


Node* insertAtEnd(Node* head, int val){
    Node* newNode = new Node(val);
    
    if(head==nullptr){
        return newNode;
    }
    
    Node* temp = head;
    
    //traverse to the end of the list
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    
    // Now link new node at the end 
    temp->next = newNode;
    
    return head;
    
    
}


int main()
{
 return 0;
}