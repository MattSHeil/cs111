#include <iostream>

using namespace std;

int main(){
  
  int x;

  cout << "Enter an integer: \n";
  cin >> x;

  if(x%2 == 0){
    if((x%3 == 0) && (x%5 == 0)){
      cout << "The integer entered is divisible by 3 and 5.\n";
    } else {
      cout << "The integer you entered is not div. by 3 and 5.\n";
    }
  } else {
    if(x > 0){
      cout << "The integer you entered is positive!\n";
    } else {
      cout << "The integer you entered is negative!\n";
    }
  } 
  
  if((x <= 100) && (x >= -100)){
    cout << "The integer entered is withing the range of -100 and 100!\n";
  } else {
    cout << "The integer entered is not in the range of -100 and 100!\n";
  }

  cout << "Thaks for using my program!!!\n";
};
