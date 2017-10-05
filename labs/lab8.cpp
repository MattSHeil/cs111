#include <iostream>

using namespace std;

int input;
char stop = 'y';
int even = 0;
int odd = 0;

int main(){
  
  while(stop == 'y' || stop == 'Y'){
    cout << "enter an integer:\n";
    cin >> input;
    
    if(input%2 == 0){
      cout << input << " is even.\n";
      even += 1;
    } else {
      cout << input << " is odd\n";
      odd += 1;
    }

    cout << "Do you have another integer to enter(Y/N)?";
    cin >> stop;
  }
  
  cout << "Odd numbers: " << odd << endl;
  cout << "Even numbers: " << even << endl;
  
  return 0;
}
