#include <bits/stdc++.h>
using namespace std;

 class Node{
  public:
      int value;
      Node * next;

      Node(int value){
        this->value = value;
        this->next = NULL;
      }


 };

class myQueue{
  public:
      Node * head = NULL;
      Node * tail= NULL;
       int sz = 0;
      void push (int value){
          sz++;
         Node * newNode = new Node (value);
         if(head==NULL){
             head=newNode;
             tail = newNode;
             return;
         }

         tail->next = newNode ;
         tail=tail->next;
      }

      void pop(){
          sz--;
        Node * deleteNode = head;
        head=head->next;
        delete deleteNode;
        if(head==NULL){
             tail=NULL;
        }
      }

      int fornt(){
         return head->value;
       }

       int size(){
          return sz;
        }

      bool empty(){
         if(sz==0) return true;
         else return false;
       }
};


int main(){

    myQueue qu;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
         int x;cin>>x;
         qu.push(x);
    }

    while(!qu.empty()){
        cout<<qu.fornt()<<" ";
        qu.pop();
    }



 return 0;


}
