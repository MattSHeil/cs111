#include <iostream>

using namespace std;

const int SIZE = 3;
void doesMath(double nums[], double & min, double & max, double & average);

int main(){
  double average = 0;
  double min = 1;
  double max = 2;
  double nums[SIZE]; 
  
  cout << "Please enter " << SIZE << " numbers:\n";
  
  for(int x = 0; x < SIZE; x ++){
    cin >> nums[x];
  }
  
  doesMath(nums, min, max, average);

  return 0;
}

void doesMath(double nums[], double & min, double & max, double & average){  
  min = nums[0];
  max = nums[0];

  for(int x = 0; x < SIZE; x++){
    average = (nums[x] + average);
    if(min > nums[x]){
      min = nums[x];
    } else if(max < nums[x]){
      max = nums[x];
    }
  }
  
  average = (average/SIZE);

  cout << "Minimum value is " << min << endl;
  cout << "Maximum value is " << max << endl;
  cout << "Average value is " << average << endl;
}
