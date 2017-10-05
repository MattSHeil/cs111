#include <iostream>

using namespace std;

double dist(double, double);

int main(){

  double int1, int2;
  cout << "Input a number: ";
  cin >> int1;
  cout << "Input another number: ";
  cin >> int2;
  dist(int1, int2);

  return 0;
}

double dist(double x, double y){
  if(x <= y){
    cout << "The distance between " << x << " and " << y << " is " << (y-x); 
  } else {
    cout << "The distance between " << x << " and " << y << " is " << (x-y);
  }
}
