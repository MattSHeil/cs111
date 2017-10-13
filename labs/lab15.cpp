#include <iostream>

using namespace std;

void treeTop();
void treeTrunk(int tHeight);
void drawTrees(int tHeight, int numTrees);
 
int main(){
  int height, num;
  char conti = 'y';

  while(conti == 'y' || conti == 'Y'){
    cout << "Enter tree height: ";
    cin >> height;
    cout << "Enter number of trees: ";
    cin >> num;

    drawTrees(height, num);
    cout << "Coninut drawing ???\n";
    cin >> conti;
  }

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
  static int treesDrawn = 0;
  for(int x = 0; x < numTrees; x++){
    treeTop();
    treeTrunk(tHeight);
    cout << endl;
    treesDrawn += 1;
  }
  
  cout << treesDrawn << " trees have been drawn\n";
}
