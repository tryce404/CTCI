#include "linkedList.h"
#include <set>
#include <iostream>
using namespace std;

template <typename T>
void list<T>::display() {
  node<T> *temp = new node<T>;
  temp = head;
  while(temp != NULL) {
    cout << temp->data << "\t";
    temp = temp->next;
  }
  cout << endl;
}


template <typename T>
void list<T>::insertStart(T value) {
  node<T> *temp = new node<T>;
  temp->data = value;
  if(head == NULL) {
    head = temp;
    tail = temp;
    temp = NULL;
  } else {
    temp->next = head;
    head = temp;
  }
} 

template <typename T>
void list<T>::insertEnd(T value) {
  node<T> *temp = new node<T>;
  temp->data = value;
  temp->next = NULL;
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
void list<T>::insertPosition(int pos, T value) {
  node<T> *prev = new node<T>;
  node<T> *cur = new node<T>;
  node<T> *temp = new node<T>;
  temp->data = value;
  if(head == NULL) {
    head = temp;
    tail = temp;
    temp = NULL;
  }
  cur = head;
  int it = 0;
  while(cur != NULL && it < pos) {
    prev = cur;
    cur = cur->next;
    it++;
  }
  
  if(cur == NULL) {
    tail = temp;
  }

  prev->next = temp;
  temp->next = cur;
}

template <typename T>
void list<T>::deleteFirst() {
  node<T> *temp = new node<T>;
  temp = head;
  if(head == NULL) {
    return;
  }
  head = head->next;
  delete temp;
}
template <typename T>
void list<T>::deleteLast() {
  node<T> *current = new node<T>;
  node<T> *previous = new node<T>;
  current = head;

  if(head == NULL) {
    return;
  } else if (head == tail) {
    head = NULL;
    tail = NULL;
    return;
  }

  while(current->next != NULL) {
    previous = current;
    current = current->next;
  }
  tail = previous;
  previous->next = NULL;
  delete current;
}
template <typename T>
void list<T>::deletePosition(int pos) {
  node<T> *current = new node<T>;
  node<T> *previous = new node<T>;
  current = head;
  if(head == NULL) {
    return;
  } else if (head == tail) {
    head = NULL;
    tail = NULL;
    return;
  }
  int it = 0;
  while(current->next != NULL && it < pos) {
    previous = current;
    current = current->next;
    it++;
  }
  
  if(current == tail) {
    tail = previous;
  }

  previous->next = current->next;
}

template class list<int>;
template class list<char>;
template class list<string>;


