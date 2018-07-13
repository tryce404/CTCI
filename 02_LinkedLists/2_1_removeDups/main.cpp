#include "../linkedList.h"
#include <iostream>
#include <set>
using namespace std;

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
  l.removeDups();
  l.display();

  return 0;
}

template class list<int>;
