#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node* next;
    Node* prev;
};
class Linkedlist
{
    public:
     Node* head;
     Node* tail;
    Linkedlist()
    {
        head = NULL;
        tail = NULL;   
    }
    void insertatend(int value)
    {
        Node* n = new Node;
        if(head == NULL)
        { 
            head  = n;
            tail =  n;
            head->value = value;
            head->next = NULL;
            head->prev = NULL;
        }
        else
        { 
            tail->next = n;
            n->prev = tail;
            tail = n;
            tail->value =value;
            tail->next = NULL;
        }
    }
    void print()
    {
        Node* temp;
        temp = head;
        while(temp!=NULL)
        {
            cout<<temp->value<<"<-->";
            temp = temp->next;
        }
    } 
};
int main()
{
  Linkedlist ll;
  cout<<"How many Elements do you want to add: ";
  int number;
  cin>>number;
  int value;
  for(int i=1;i<=number;i++)
  {
      cin>>value;
      ll.insertatend(value);
  }
  ll.print();
return 0;     
}