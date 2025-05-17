#include<iostream>
using namespace std;

struct Node{
public: 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }

};

Node* insertAtBeginning(Node* head, int val) {
    
   Node* newNode = new Node(val);
   
   newNode->next = head;
    
    return newNode;
    
}

int main()
{
 return 0;
}