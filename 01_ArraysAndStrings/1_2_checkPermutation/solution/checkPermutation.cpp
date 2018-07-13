#include <iostream>
using namespace std;

bool permutation(string s, string t) {
  if(s.length() != t.length())
    return false;

  int letters[128];
  for(int i = 0; i < s.length(); i++) {
    letters[s[i]]++;
  }
  for(int i = 0; i < t.length(); i++) {
    letters[t[i]]--;
    if(letters[t[i]] < 0)
      return false;
  }
  return true;
}

int main() {
  string str_1, str_2;
  cin >> str_1;
  cin >> str_2;
  cout << permutation(str_1, str_2) << endl;
  return 0;
}
