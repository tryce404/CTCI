#include "../linkedList.h"
#include <iostream>
#include <set>
using namespace std;

template <typename T>
int list<T>::getSize() {
  node<T> *current = new node<T>;
  current = head;

  int size = 0;
  while(current != NULL) {
    current = current->next;
    size++;
  }
  return size;
}

template <typename T>
T list<T>::getFromEnd(int pos) {
  if(pos < 0) {
    return tail->data;
  }
  int size = getSize();
  int index = size - pos - 1;
  
  node<T> *current = new node<T>;
  current = head;

  int i = 0;

  while(current != NULL && i < index) {
    current = current->next;
    i++;
  }
  
  return current->data;
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
  
  cout << l.getFromEnd(2) << endl;

  return 0;
}

template class list<int>;
