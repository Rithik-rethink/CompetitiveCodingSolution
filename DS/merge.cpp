#include<bits/stdc++.h>

using namespace std;

class Node{
    public: int data;
            Node* next;
            Node(int info){
                data = info;
                next = NULL;
            }
};
Node* takeinput(){
    int i ;
    cin>>i;
    Node* head = new Node(i);
    Node* tail = head;
    int n = 4;
    while(n){
        Node* temp ;
        cin>>i;
        temp = new Node(i);
        tail->next = temp;
        tail = temp;
        n -= 1;

    }
    return head;
}
Node* calculate(Node* head , Node* head2){
    Node* temp = head;
    Node* temp2 = head2;
    Node* res ;
    Node* tail ;
    if(temp->data >= temp2->data){
        res = new Node(temp->data);
        tail = res;
        Node* ex = new Node(temp2->data);
        ex->next = tail;
        tail = ex;
    }
    else{
        res = new Node(temp2->data);
        tail = res;
        Node* ex = new Node(temp->data);
        ex->next = tail;
        tail = ex;
    }
    
    while(temp != NULL && temp2 != NULL){
        if(temp->data >= temp2->data){
            Node* ex = new Node(temp->data);
            ex->next = tail;
            tail = ex;
            ex = new Node(temp2->data);
            ex->next = tail;
            tail = ex;
        }
        else{
            Node* ex = new Node(temp2->data);
            ex->next = tail;
            tail = ex;
            ex = new Node(temp->data);
            ex->next = tail;
            tail = ex;
        }
        temp = temp->next ; 
        temp2 = temp2->next;
    }
    return tail;
}
void print(Node* res){
    Node* r = res;
    while(r!=NULL){
        cout<<r->data<<"->";
        r = r->next;
    }
    cout<<endl;
}

int main(){
    Node* head;
    Node* head2;
    head = takeinput();
    head2 = takeinput();
    Node* ans = calculate(head,head2);
    print(ans);

}