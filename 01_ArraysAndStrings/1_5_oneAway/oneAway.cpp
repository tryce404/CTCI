#include <iostream>
using namespace std;

bool isOneAway(string s1, string s2) {
  int m = s1.length(), n = s2.length();

  if(abs(m - n) > 1)
    return false;

  int editCount = 0, i = 0, j = 0;

  while(i < m && j < n) {
    if(s1[i] != s2[j]) {
      if(editCount == 1)
        return false;

      if(m > n) {
        i++;
      } else if (n > m) {
        j++;
      } else {
        i++;
	j++;
      }
      
      editCount++;
    } else {
      i++;
      j++;
    }
  }

  if(i < m || j < n) {
    editCount++;
  }

  return editCount == 1;
}

int main() {
  string str_1;
  string str_2;
  
  cout << "Check if two strings are 1 edit away from eachother" << endl;
  cout << "Input string 1" << endl;
  cin >> str_1;

  cout << "Input string 2" << endl;
  cin >> str_2;

  cout << str_1 << " " << str_2 << endl;
  cout << isOneAway(str_1, str_2) << endl;

}
