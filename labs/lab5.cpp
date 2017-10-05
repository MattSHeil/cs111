#include <iostream>

using namespace std;

int x = -1;

int main(){
  
  cout << "Please enter a number from 0 to 10:";
  cin >> x;

  if(x <= 10 && x >= 0){

    switch(x){
      case 0:
	cout << "Zero!\n";
	break;
      case 1:
        cout << "One!\n";
	break;
      case 2:
	cout << "Two!\n";
	break;
      case 3:
        cout << "Three!\n";
	break;
      case 4:
	cout << "Four!\n";
	break;
      case 5:
	cout << "Five!\n";
	break;
      case 6:
        cout << "Six\n";
	break;
      case 7:
	cout << "Seven!\n";
	break;
      case 8: 
	cout << "Eight!\n";
	break;
      case 9:
        cout << "Nine!\n";
        break;
      case 10:
	cout << "TEN!\n";
	break;
	//      default:
	//	cout << "Invalid input.\n";
	//	break;
    }
  } else {
    
    cout << "invalid input!\n";
    
  }
  cout << "Thank you for using this program!\n";
}
