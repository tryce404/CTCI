#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isSubstring(string s, string t) { 
  for(int i = 0; i < t.length(); i++) {
    if(s.compare(t) == 0)
      return true;
    else
      rotate(t.begin(), t.begin() + 1, t.end());
  }

  return false;
}

int main() {
  string s;
  string t;

  s = "waterbottle";
  t = "erbottlewat";

  cout << isSubstring(s, t) << endl;
  return 0;
}
