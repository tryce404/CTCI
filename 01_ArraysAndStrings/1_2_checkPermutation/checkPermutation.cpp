#include <iostream>
#include <algorithm>
using namespace std;

// Algorithm to check if one string is a permutation of another

//hash table may be useful
//sort the two strings and compare

int main() {
  string str_1;
  string str_2;
  cout << "input string 1" << endl;
  cin >> str_1;
  cout << "input string 2" << endl;
  cin >> str_2;
  cout << str_1 << " " << str_2 << endl; 
  sort(str_1.begin(), str_1.end()); 
  sort(str_2.begin(), str_2.end());
  cout << str_1 << " " << str_2 << endl; 
  
  if(str_1.compare(str_2) == 0) 
    cout << "The strings are permutations of each other" << endl;
  else
    cout << "false" << endl; 
    
  return 0;
}
