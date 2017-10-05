#include <iostream>
#include <stdio.h>

using namespace std;

string fullName;
char myChar;

int main(){

  cout << "Enter full name: \n";
  //getline(cin, fullName);
  //cin.get(myChar);
  //cout << "Your name is: " << fullName << endl;
  //cout << "Your char is: " << myChar << endl;

  cin >> fullName;
  
  cin.ignore();
  cin.get(myChar);
  
  cout << myChar << endl;  
  cout << "Done\n"; 

  return 0;

}
