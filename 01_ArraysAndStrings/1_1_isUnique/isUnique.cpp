#include "HashEntry.h"
#include "HashMap.h"
#include <iostream>
using namespace std;

// Algorithm to determine if a string has all unique characters
//
// Use a hash table
// Possibly use a bit vector
// Could you solve it in O(N log N) time?

HashMap hMap;

bool isUnique(string s) {
  for(int i = 0; i < s.length(); i++) {
    if(hMap.get(s[i]) == -1) {
      hMap.put(s[i], 0);
    }  else {
      return false;
    }
  }
  return true;
}

int main() {  
  string inputString;
  cout << "Input a string: " << endl;
  cin >> inputString;
  cout << isUnique(inputString) << endl;
}
