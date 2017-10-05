#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string fname; 
int total = 0;

int main(){

  cout << "Please enter filename:\n";
  getline(cin, fname);

  fstream myfile(fname.c_str());
  
  int a;

  if(myfile.is_open()){
    while(myfile >> a){
      cout << "Reads " << a << " from file." << endl; 
      total += a;
    }
    cout << total << endl;
    myfile.close();
  } else {
    cout << "Failed to open file.\n";
  }

  return 0;
}
