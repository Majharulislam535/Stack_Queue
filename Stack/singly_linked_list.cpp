#include<bits/stdc++.h>

using namespace std;

class Node
{

public:
    int value;
    Node * next;

    Node (int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class myStack
{

public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz =0;
    void push(int value)
    {
        sz++;
        Node * newNode = new Node(value);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }

        newNode->next =head;
        head = newNode;

    };

    void pop()
    {
        if(head==NULL){
            return;
        }
       sz--;

       Node * deleteNode = head;
       head =head->next;
       delete deleteNode;

    }
    int top()
    {
        return head->value;

    }
    int siz()
    {
        return sz;
    }
    bool emt()
    {
        if(sz==0) return true;
        else return false;
    }
};


int main()
{

    myStack st;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while(!st.emt())
    {
        cout<<st.top()<<endl;
       st.pop();
    }



    return 0;
}
