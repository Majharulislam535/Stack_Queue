 #include<bits/stdc++.h>
 using namespace std;

  class Node {
   public:
       int value;
       Node * pre;
       Node * next;

       Node(int value){
          this->value= value;
          this->next=NULL;
          this->pre =NULL;
       }
  };

  class myQueue{
   public:
         Node * head = NULL;
         Node *tail = NULL;
          int sz=0;
         void push(int value){
             sz++;
           Node * newNode = new Node (value);

           if(head==NULL){
             head=newNode;
             tail=newNode;
             return;
           }
            tail->next=newNode;
            newNode->pre=tail;
            tail=tail->next;
         }

         void pop(){
           sz--;
           Node * deletedNode = head;
           head = head->next;
           if(head==NULL){
             tail=NULL;
             delete deletedNode;
             return;
           }
           head->pre=NULL;
           delete deletedNode;
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

  myQueue st;

   int n;
   cin>>n;
   for(int i=0;i<n;i++){
      int x;
      cin>>x;
      st.push(x);
   }

   while(!st.empty()){
       cout<<st.fornt()<<endl;
       st.pop();
   }


 return 0;
 }
