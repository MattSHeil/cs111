#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string test;

int main(){
  
  cout << "please enter a sentence:\n";
  getline(cin, test);
  ofstream myfile;
  myfile.open("sentence.txt");
  myfile << test; 
  myfile.close();
 
  return 0;
}
