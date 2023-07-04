#include<bits/stdc++.h>

using namespace std;

class myQueue{
  public:
      list <int> li;

      void push(int value){
          li.push_back(value);
       }

       void pop( ){
          li.pop_front();
       }

       int front(){
         return li.front();
       }
       int size(){
         return  li.size();
        }

        bool empty(){
           if(li.size()==0) return true;
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

     while(st.empty()==false){
         cout<<st.front()<<" ";
         st.pop();
     }


return 0;
}
