#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  //  cout << "       1   2   3   4   5   6   7   8   9\n";
  //  cout << "****************************************\n";

  for(int x = 1; x <= 9; x += 1){
    if(x == 1){
      cout << setw(8) << right << x;
    } else {
      cout << setw(4) << right << x;
    }
  }

  cout << endl; 

  for(int x = 1; x <= 40; x += 1){
    cout << "*";
  }
  
  cout << endl;

  for(int x = 1; x <= 9; x += 1){
    
    cout << setw(3) << right <<  x << "|";
    
    for(int y = 1; y <= 9; y += 1){
      
      cout << setw(4) << right << x*y; 

    }
    
    cout << endl;
  }

  return 0;
}
