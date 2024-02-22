#include<iostream>
using namespace std;



class Node
{
    public: 

    int data;
    Node* prev;
    Node* next;

    Node()
    {
        this->data = 0;
        this -> prev= NULL;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        cout<<"Node with value : "<<this->data<<" delete"<<endl;
    }
};


int getLength(Node* &head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    return len;
} 

void deleteFromPos(Node* &head,Node* &tail,int pos){
    if(head == NULL){
        cout<<"Linked list is empty";
        return;
    }

//if single node consist
    if(head -> next == NULL){
        Node* temp = head;
        head= NULL;
        tail = NULL;
        delete temp;
        return;
    }

int len = getLength(head);
    if(pos > len){
        cout<<"Plz enter a valid position";
        return;
    }

    if(pos == 1){
        //want to delete the first node
        Node* temp = head;
        head = head -> next;
        head -> prev = NULL;
        temp -> next = NULL;
        delete temp;
        return;
    }

    if(pos == len){
        //you want to delte th last node
        Node* temp = tail;
        tail = tail -> prev;
        temp -> prev= NULL;
        tail -> next = NULL;
        delete temp;
        return;
    }

    //delete at middle
    //step 1: find left ,curr,right
    int i=1;
    Node* left = head;
    while(i<pos  -1 ){
        left = left -> next;
        i++;
    }
    Node* curr = left -> next;
    Node* right = curr -> next;

    //stp2 :
     left -> next = right;
     //step 3:
     right -> prev = left;
     //step 4:
     curr -> prev= NULL;
     //step 5;
     curr -> next = NULL;
     //step 6:
     delete curr;

}








void insertAtTail(int data,Node* &head,Node* &tail){
    //if linked list is null
    if(head== NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //if not empty
    //step1 : create a newNode
    Node* newNode = new Node(data);

    //step2: tail -> next = newNode;
    tail -> next = newNode;

    //step3 : newNode -> prev = tail;
    newNode -> prev = tail;

    //step 4: update the tail;
    tail = newNode;
}



void insertAtHead(int data,Node* &head,Node* &tail){
    //if doubly linked list is NULL
    if(head == NULL){
       Node* newNode = new Node(data);
       head= newNode;
       tail= newNode; 

       return;
    }

    //if not null;
    // step1 : craete a newNode
    Node* newNode = new Node(data);
    //step2: connect newNode -> next = head;
    newNode -> next = head;
    //step3 : connect head -> prrev = newNode;
    head -> prev= newNode;
    //step4 : head = newNode;
    head = newNode;
}


void insertAtposition(int data,Node* &head,Node* &tail,int pos){
    //if empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head= newNode;
        tail = newNode;
        return;
    }

    //if not null;
    if(pos == 1){
        insertAtHead(data,head,tail);
        return;
    }
 
    int len = getLength(head); 
    if(pos >len){
        insertAtTail(data,head,tail);
        return;
    }

    //insertion iin middle

    // step 1: find prev and curr;
    int i=1;
    Node* prevNode = head;
    while(i<pos -1){
         prevNode = prevNode -> next;
         i++;
    }
    Node* curr = prevNode -> next;
    // //step 2: create a node
    Node* newNode = new Node(data);
    // //step3: connect prevNode -> next = newNode;
    prevNode -> next = newNode;
    // //step4 : connect newNOde- >prev = prevNode;
    newNode-> prev = prevNode;
    // //step 5: connect curr -> prev = newNode
    curr -> prev = newNode;
    // //step5 : connect newNode -> next = curr;
    newNode -> next = curr;
}


void print(Node* &head){
 Node* temp = head;

 while (temp != NULL)
 {
    cout<<temp->data<<" ";
    temp = temp -> next;
 }
 
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    Node* head = first;
    Node* tail = third;

    first -> next = second; 
    second -> prev =first;

    second -> next = third;
    third -> prev= second;

    // print(first);
    // cout<<endl;
insertAtHead(101,head,tail);
insertAtTail(201,head,tail);
insertAtposition(50,head,tail,5);
cout<<endl;
print(head);
cout<<endl;

deleteFromPos(head,tail,6);
cout<<endl;
print(head);

return 0;
}

