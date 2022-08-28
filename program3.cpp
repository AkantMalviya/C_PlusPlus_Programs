#include<iostream>
#include<exception>
using namespace std;
struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node* head;
   Node* tail;
   Node(Node* h, Node* t,Node* p, Node* n, int k, int val):head(h),tail(t),prev(p),next(n),key(k),value(val){};
   Node(int k, int val):head(NULL),tail(NULL),prev(NULL),next(NULL),key(k),value(val){
      printf("yes");
   };
};
int main()
{     
Node n(1,20);
Node* temp;
n.head = &n;
temp = n.head;
while(n.head!=NULL)
{
    cout<<n.key<<"<--"<<n.value;
    n.head==NULL;
}
return 0;    
}