#include <iostream>
#include <fstream>

using namespace std;

int tsize = 0;
string stars = "*";

int main(){
  
  ofstream myfile;
  myfile.open("triangle.txt");
  
  do {
    cout << "please enter the size of a triangle you ish to have (1 to 50)\n";
    cin >> tsize;
   
    if(tsize >= 1 && tsize <= 50){
      for(int x = 1; x <= tsize; x += 1){
	myfile << stars << endl;
	stars += "*";
      }
      stars.erase(stars.end()-1);

      for(int y = 1; y < tsize; y += 1){
	stars.erase(stars.end()-1);
	myfile << stars << endl;
      }
    } else {
      cout << "Input is out of range!\n"; 
    }
  } while (tsize < 1 || tsize > 50);
  myfile.close();
  
  cout << "Triangle saved to file!\n";
  return 0;
}
