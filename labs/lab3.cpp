#include <iostream>
#include <iomanip>

using namespace std;

void bLine(){
  for(int i = 0; i < 30; i += 1){
    cout << "*";
  }
}

int main(){
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  
  string item1, item2, item3;
  double tax, p1, p2, p3, total, tt;
  
  cout << "Please enter 3 item names:\n";
  getline(cin, item1);
  getline(cin, item2);
  getline(cin, item3);

  cout << "Please enter their respective prices: \n";

  cin >> p1;
  cin >> p2;
  cin >> p3;

  cout << "Please enter the tax in decimal form  that will be used:\n";
  cin >> tax;

  total = p1+p2+p3;
  tt = total * tax;

  bLine();

  cout << endl;
  cout << setw(24) << endl << left << item1 << right << " $" << p1 << endl;
  cout << endl;
  cout << setw(24) << left << item2 << right<<" $" << p2 << endl;
  cout << endl;
  cout << setw(24) << left <<item3 << right <<" $" << p3 << endl;
  cout << endl;

  cout << endl;
  cout << setw(24) << left << "Subtotal" << right << " $" << total << endl;
  cout << endl;
  cout << setw(24) << left << "Tax" << right << " $" << tt << endl;
  cout << endl;
  cout << setw(24) << left << "total" << right << " $" << total+tt << endl;
  cout << endl;

  bLine();
  
  cout << endl; 
  cout << endl << "Thank you for shopping with us" << endl; 
  cout << endl;

  bLine();

  cout << endl;

}
