#include "linkedList.h"
#include <iostream>
using namespace std;

int main() {
  list<char> l;
  
  l.insertEnd('b');
  l.insertStart('a');
  l.insertEnd('c');  
  
  l.insertPosition(1, 'd');

  l.deleteLast();
  l.display();

  //l.removeDups();

  //l.display();
  
  return 0;
}
