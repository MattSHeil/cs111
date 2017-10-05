#include <iostream>

using namespace std;

int input = 0;
int even = 0;
int odd = 0;

int main(){
  
  cout << "Please enter postive integers, to quit enter -1.\n";
  
  do {
    cin >> input;
    if(input%2 == 0){
      cout << input <<  " is Even\n";
      even += 1;
    } else if(input == -1){
      if(even == 0 && odd == 0){
	cout << "You entered nothing.\n";
      } else {
        cout << "Odd number: " << odd << endl;
        cout << "Even number: " << even << endl; 
      }
    } else {
      cout << input << " is Odd\n";
      odd += 1;
    }
  } while (input != -1);
 
  return 0;
}
