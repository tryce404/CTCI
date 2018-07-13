#include <iostream>
using namespace std;

bool isUniqueChars(string str) {
  if (str.length() > 128) 
    return false;

  bool char_set[128];
  
  for (int i = 0; i < str.length(); i++) {
    int val = str[i];
    if(char_set[val])
      return false;
    char_set[val] = true;
  } 
  return true;
}

int main() {
  cout << "Input string: " << endl;
  string str;
  cin >> str;
  cout << isUniqueChars(str) << endl;
  return 0;
}
