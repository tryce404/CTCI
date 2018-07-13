#include <iostream>
#include <string>
using namespace std;

string getStringCompression(string s) {
  string output;
  //cout << s[0] << endl;
  string test = "a";
  if(s.length() >= 1) {
    output += s[0];
  } else {
    return output;
  }

  char currentChar = s[0];
  int counter = 1;
  for(int i = 1; i < s.length(); i++) {
    if(s[i] != currentChar) {
      output.append(to_string(counter));
      output += s[i];
      currentChar = s[i];
      counter = 1;
    } else {
      counter++;
    }
  }
  output.append(to_string(counter));

  if(s.length() <= output.length()) {
    return s;
  } else {
    return output;
  }
}

int main() {
  string s;
  cout << "input a string that could be compressed" << endl;
  cin >> s;
  cout << s << endl;
  cout << "Compressed string" << endl;
  cout << getStringCompression(s) << endl;
}
