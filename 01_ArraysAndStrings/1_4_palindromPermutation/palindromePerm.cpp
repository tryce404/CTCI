#include <iostream>
#include <string>
using namespace std;

// do not generate all permutations
//
//

string stringToLower(string s) {
 for(int i = 0; i < s.length(); i++) {
    if(s[i] <= 'Z' && s[i] >= 'A')
      s[i] = s[i] - ('Z' - 'z');
  }
 return s;
}

bool isPalindromPerm(string s) {
  int letterCount[128];
  int stringLength = 0;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] <= 'z' && s[i] >= 'a') {
      letterCount[s[i]]++;
      stringLength++;
    }
  }

  int oddLetterCount = 0;

  for(int i = 0; i < s.length(); i++) {
    if(letterCount[s[i]] % 2 != 0)
      oddLetterCount++;
  }
  
  if(stringLength % 2 == 0 && oddLetterCount == 0)
      return true;
  else if (stringLength % 2 != 0 && oddLetterCount == 1)
      return true;
  
  return false;
}

int main() {
  string str = "Tact Coa";
  //getline(cin, str);
  string lowerStr = stringToLower(str); 
  cout << lowerStr << endl;
  cout << isPalindromPerm(lowerStr) << endl;
  
  return 0;
}
