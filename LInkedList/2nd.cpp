#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        cout<<"Node with value : "<<this->data <<" deleted"<<endl;
    }
};

//i want to insert a node right at the head of linked list
void insertAtHead(Node* &head,Node* &tail,int data){
//if it is first node = null;
if(head == NULL){
    Node* newnode = new Node(data);
    head= newnode;
    tail = newnode;
    return;
}

//step1 :
Node*  newnode = new Node(data);
//step2:
newnode -> next = head;



//step3 :
head = newnode;
 
}

void insertAtTail(Node* head,Node* &tail,int data){
//check for null
    if(head == NULL){
    Node* newnode = new Node(data);
    head= newnode;
    tail = newnode;
    return;
}

    //step 1:
    Node* newNode = new Node(data);
    //step 2: connect with old tail node

    tail->next = newNode;


    //step3 : update tail node
    tail = newNode;

}

int findLenghth(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    return len;

}

void deleteNode(int position,Node* &head,Node* &tail){
    if(head == NULL){
        cout<<"You cannot delete it";
        return;
    }
//delete at the beginning of list
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp->next = NULL;
        delete temp;
    }

//delete at the tail of list
    int len = findLenghth(head);
    if(position == len){
        //find prev
        int i =1;
        Node* prev = head;
        while ( i < position -1)
        {
            prev = prev -> next;
            i++;
        }
        //step 2:
        prev-> next = NULL;
        //step 3:
        Node* temp = tail;
        //step 4:
        tail = prev;
        //step 5:
        delete temp;
        return;
        
    }

    //deleting middle node

    //step : find prev and curr;

    int i=1;
    Node* prev = head;
    while(i<position -1){
        prev = prev -> next;
        i++;
    }
    Node* curr = prev -> next;

    //step 2:
    prev->next = curr -> next;
    //step 3:
    curr -> next = NULL;
    //step 4:
    delete curr;
}



void insertAtposition(int position,Node* &head,Node*  &tail,int data){
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    //step1 : find the position : prev &curr

if(position == 0){
    insertAtHead(head,tail,data);
    return;
}

    int len = findLenghth(head);
    if(position >= len){
    insertAtTail(head,tail,data);
    return;

    }

    //step1 : find curr and prev 
    int i = 1;
    Node* prev = head;
    while(i<position) {
        prev = prev -> next;
        i++;
    }
    Node* curr = prev->next;
    //Step2 : 
    Node* newnode = new Node(data);

    //step 3:
    newnode -> next = curr;
     //step 4:
     prev->next = newnode;
}


void print(Node* head){
 Node* temp = head;

 while (temp != NULL)
 {
    cout<<temp->data<<" ";
    temp = temp -> next;
 }
 
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtTail(head,tail,70);
        // cout<<endl;
    // insertAtposition(0,head,tail,101);

    // print(head);
    // print(tail);


deleteNode(3,head,tail);
cout<<endl;
print(head);


    return 0;

}



