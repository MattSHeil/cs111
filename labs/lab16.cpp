#include <iostream>

using namespace std;

void doesMath(double x, double w, double y, double z, double & min, double & max, double & average);

int main(){
  double num1, num2, num3, num4, min, max, average;

  cout << "Please enter 4 numbers:\n";
  cin >> num1 >> num2 >> num3 >> num4;
  
  doesMath(num1, num2, num3, num4, min, max, average);
  
  return 0;
}

void doesMath(double num1, double num2, double num3, double num4, double & min, double & max, double & average){

  min = num1;
  min = num1;

  if(min > num2){
    min = num2;
  }
  if(min > num3){
    min = num3;
  }
  if(min > num4){
    min = num4;
  }
  
  cout << "Minumun value is " << min << endl; 
  
  if(max < num2){
    max = num2;
  }
  if(max < num3){
    max =  num3;
  }
  if(max < num4){
    max = num4;
  }
  
  cout << "Maximum value is " << max << endl; 

  average = (num1 + num2 + num3 + num4)/4;

  cout << "Average is " << average << endl;  
}
