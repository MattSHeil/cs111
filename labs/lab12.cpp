#include <iostream>

using namespace std;

int slot; 

double nums[999];

int main(){
  
  for(int x = 0;x < 1000; x++){
    nums[x] = (x * 7.5);
  }

  cout << "Enter an array slot number: ";
  cin >> slot;

  if(slot >= 0 && slot <= 999 ){
    cout << "The value in array slot " << slot << " is " << nums[slot] << endl;
  } else {
    cout << "Value out of range\n";
  }  
  
  return 0;
}
