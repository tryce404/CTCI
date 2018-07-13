#include "../linkedList.h"
#include <iostream>
#include <set>
using namespace std;

template <typename T>
void list<T>::insertNode(node<T> *n) {
  node<T> *temp = n;
  if(head == NULL) {
    head = temp;
    tail = temp;
    temp = NULL;
  } else {
    tail->next = temp;
    tail = temp;
  }
}

template <typename T>
node<T> * list<T>::isIntersection(list a, list b) {
  node<T> *current_1 = new node<T>;
  node<T> *current_2 = new node<T>;
  current_1 = a.head;
  current_2 = b.head;

  set<node<T> *> nodes;  
  typename set<node<T> *>::iterator it;
  pair<typename set<node<T> *>::iterator,  bool> ret;

  while(current_1 != NULL || current_2 != NULL) {
    if(current_1 != NULL) {
      ret = nodes.insert(current_1);
      if(ret.second == false) {
        return current_1;
      }
      current_1 = current_1->next;
    }
    if(current_2 != NULL) {
      ret = nodes.insert(current_2);
      if(ret.second == false) {
        return current_2;
      }
      current_2 = current_2->next;
    }
  } 
  return NULL;
}

int main() {
  list<int> l;
  node<int> *a = new node<int>;
  a->data = 69;
  l.insertEnd(1);
  l.insertEnd(2);
  l.insertEnd(6);
  l.insertNode(a);

  list<int> m;
  m.insertEnd(7);
  m.insertNode(a);
  m.insertEnd(1);
  m.insertEnd(6);
    
  l.display();
  m.display();
  
  node <int> *b = new node<int>; 
  b = l.isIntersection(l, m);  
  cout << b->data << endl;
  return 0;
}

template class list<int>;
