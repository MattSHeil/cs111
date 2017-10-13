#include <iostream>

using namespace std;

char q1;
char q2;

string gj = "Great job!\n";
string da = "You're doing alright.\n";
string ci = "You can improve.\n";

int main(){
  
  cout << "Are you currently taking a class? (y/n)\n";
  cin >> q1;

  if( q1 == 'y' || q1 == 'Y'){    
    cout << "Please enter a letter grade for your class:\n";
    cin >> q2;
    
    switch(q2){
      case 'a':
      case 'A':
      case 'b':
      case 'B':
        cout << gj << endl;
	break;
      case 'c':
      case 'C':
	cout << da << endl;
	break;
      case 'd':
      case 'D':
      case 'f':
      case 'F':
	cout << ci << endl;
	break;
      default: 
	cout << "Invalid input\n";
	break;
    }

  } else if( q1 == 'n' || q1 == 'N'){
    cout << "Thank you for using our system.\n"; 
  } else {
    cout << "Invalid input!!!\n";
  }
}
