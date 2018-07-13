#include "../linkedList.h"
#include <iostream>
#include <set>
using namespace std;

template <typename T>
void list<T>::makeCircular() {
  tail->next = head;
}

template <typename T>
node<T> * list<T>::loopDetection() {
  node<T> *current = new node<T>;
  node<T> *previous = new node<T>;
  current = head;
  previous = head;

  set<node<T> *> values;
  typename set<node<T> *>::iterator it;
  pair<typename set<node<T> *>::iterator, bool> ret; 
  
  while(current != NULL) {
    ret = values.insert(current);
    if(ret.second == false) {
      previous->next = NULL;
      tail = previous;
      return current;
    } else {
      previous = current;
    }
    current = current->next;
  }
}

template <typename T>
void list<T>::removeDups() {
  node<T> *current = new node<T>;
  node<T> *previous = new node<T>;
  current = head;
  previous = head;

  set<int> values;
  set<int>::iterator it;
  pair<set<int>::iterator, bool> ret;
  
  while(current != NULL) {
    ret = values.insert(current->data);
    if(ret.second == false) {
      if(current == tail)
        tail = previous;
      previous->next = current->next;
    } else { 
      previous = current;
    } 
    current = current->next;
  }
}


int main() {
  list<int> l;
  l.insertEnd(7);
  l.insertEnd(1);
  l.insertEnd(6);
  l.insertEnd(1);
  l.insertEnd(2);
  l.insertEnd(6);
  
  l.display();
  l.makeCircular();
  node <int> *b = new node<int>;
  b = l.loopDetection();
  cout << b->data << endl;
  l.insertEnd(69);
  l.display();

  return 0;
}

template class list<int>;
