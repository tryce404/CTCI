#include "../linkedList.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool list<T>::isPalindrome() {
  node<T> *current = new node<T>;
  current = head;

  string s;

  while(current != NULL) {
    s += current->data;
    current = current->next;
  }

  int l = 0;
  int h = s.length() - 1;

  while(h > 1) {
    if(s[l++] != s[h--])
      return false;
  }
  return true;
}

int main() {
  list<char> l;
  l.insertEnd('t');
  l.insertEnd('a');
  l.insertEnd('c');
  l.insertEnd('o');
  l.insertEnd('c');
  l.insertEnd('a');
  l.insertEnd('t');
  
  l.display();
  cout << l.isPalindrome() << endl;

  return 0;
}

template class list<int>;
