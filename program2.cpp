#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){
      printf("yes");
   };
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache : public Cache
{   
    public : 
    LRUCache(int capacity)
    {
       this->cp = capacity;
       this->head = NULL;
       this->tail = NULL;
       
       }
    void set(int key, int value)
    { 
       if(head->prev == NULL && head->next == NULL)
       {
          head->value = value;
          head->key = key;
       }  
      //   Node node(key,value);
      //   this->head
      //   if(this->cp > 0)
      //   {
      //        this->mp.insert({key,node});
      //   }
    }
    int get(int key)
    {
        if(key == head->key)
        {
            return head->value;
        }
        else
        { return -1;}
      return 0;
    } 
    
};
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
