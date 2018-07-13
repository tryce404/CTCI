#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

template <typename T>
struct node {
  T data;
  node * next;

};
template <typename T>
class list {
  private:
  node<T> *head;
  node<T> *tail;
  public:
  list() {
    head = NULL;
    tail = NULL;    
  };
  void display();
  void insertStart(T t);
  void insertEnd(T t);
  void insertPosition(int pos, T t);
  void deleteFirst();
  void deleteLast();
  // 2_1_removeDups
  void removeDups();
  // 2_2_getFromEnd
  int getSize();
  T getFromEnd(int pos);
  // 2_3_deletePosition
  void deletePosition(int pos);
  // 2_4_partion

  // 2_5_sumLists
  void sumList(list a, list b);
  // 2_6_isPalindrome
  bool isPalindrome();
  // 2_7_intersection
  void insertNode(node<T> *n);
  node<T> * isIntersection(list a, list b);
  // 2_8_loopDetection
  void makeCircular();
  node<T> * loopDetection();
};

#endif
