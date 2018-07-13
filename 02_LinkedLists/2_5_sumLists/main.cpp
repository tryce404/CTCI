#include "../linkedList.h"
#include <iostream>
using namespace std;

template <typename T>
void list<T>::sumList(list a, list b) {
  int sum = 0;
  
  node<T> *current_1 = new node<T>;
  node<T> *current_2 = new node<T>;
  
  current_1 = a.head;
  current_2 = b.head;
  
  int multiplier = 1;
  
  while(current_1 != NULL || current_2 != NULL) {
    if (current_1 != NULL) {
      sum += current_1->data * multiplier;
      current_1 = current_1->next;
    } 
    if (current_2 != NULL) {
      sum += current_2->data * multiplier;
      current_2 = current_2->next;
    }  
    multiplier *= 10;
  }
  
  while(sum > 0) {
    int digit = sum % 10;
    sum /= 10;
    this->insertEnd(digit);
  }
}

int main() {
  list<int> l1;
  l1.insertEnd(7);
  l1.insertEnd(1);
  l1.insertEnd(6);
  
  list<int> l2;
  l2.insertEnd(5);
  l2.insertEnd(9);
  l2.insertEnd(2); 
  
  l1.display();
  l2.display();

  list<int> l3;
  l3.sumList(l1, l2);

  l3.display();
  return 0;
}

template class list<int>;
