#include <iostream>
using namespace std;

string urlify(string s) {
  string t = "%20";
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == ' ')
      s.replace(i, 1, t); 
  }
  return s;
}

int main() {
  string str = "Mr John Smith";
  cout << urlify(str) << endl;
  return 0;
}
