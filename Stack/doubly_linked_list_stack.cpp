#include <bits/stdc++.h>
using namespace std;


class Node{
   public:
       int value;
       Node * pre;
       Node * next;

       Node(int value){
         this->value=value;
         this->pre=NULL;
         this->next=NULL;
       }
};


class myStack{
 public:
     Node * head =NULL;
     Node * tail = NULL;
     int sz = 0;
     void push(int value){
         sz++;
        Node * newNode = new Node (value);
        if(head==NULL){
             head = newNode;
             tail= newNode;
             return;
        }
        newNode->pre = tail;
        tail->next = newNode;
        tail = tail->next;
     }

     void pop(){
         sz--;
        Node * deletedNode = tail;
        tail = tail->pre;
        if(tail==NULL){
             head=NULL;
        }
        else{
             tail->next = NULL;
        }
        delete deletedNode;
     }

     int top(){
        return tail->value;
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

    myStack st;

   int n;
   cin>>n;
   for(int i=0;i<n;i++){
      int x;
      cin>>x;
      st.push(x);
   }

   while(!st.empty()){
       cout<<st.top()<<endl;
       st.pop();
   }





 return 0;


}
