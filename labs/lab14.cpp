#include <iostream>

using namespace std;

void treeTop();
void treeTrunk(int tHeight);
void drawTrees(int tHeight, int numTrees);

int height, num;

int main(){
  
  cout << "Enter tree height: ";
  cin >> height;
  cout << "Enter number of trees: ";
  cin >> num;
  
  drawTrees(height, num);
  
  return 0;
}

void treeTop(){
  cout << "   ^   " << endl;
  cout << "  / \\" << endl;
  cout << " /   \\" << endl;
  cout << "/_____\\" << endl; 
}
 
void treeTrunk(int tHeight){
  for(int x = 0; x < tHeight; x++){
    cout << "  | |" << endl;
  }
}
void drawTrees(int tHeight, int numTrees){
  for(int x = 0; x < numTrees; x++){
    treeTop();
    treeTrunk(tHeight);
    cout << endl;
  }  
}
