#include <math.h>

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int target) {
  // Write your code here.
  int closest = tree->value;
  while(tree != NULL){
    if(abs(target - closest) > abs(target - tree->value)){
      closest = tree->value;  
    }
    if(target < tree->value){
        tree = tree->left;
    }
    else if(target > tree->value){
        tree = tree->right;
    }
    else{
      break;
    }
  }
  return closest;
}
