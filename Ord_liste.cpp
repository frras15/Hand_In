#include <iostream>
#include <string>

using namespace std;

int main() {
  string list;
  cout << "Please enter a list of words:  \n"; //Message to the user
  getline(cin, list);   //Take the input from the user

  int numOfChars = 0;    //Counts the number of character in the given string
  cout << list << ": " << list.length() << endl; //Gives the output of the list and the number of chars
  return 0;
}
