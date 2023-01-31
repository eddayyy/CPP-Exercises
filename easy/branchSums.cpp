#include <vector>
using namespace std;

// This is the class of the input root. Do not edit it.
class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

void calculateSums(BinaryTree* node, int currentSum, vector<int> &sums){
    currentSum += node->value;
    if(node->left == nullptr && node->right == nullptr){
        sums.push_back(currentSum);
        return;
    }
    else{
        if( node->left != nullptr){
            calculateSums(node->left, currentSum, sums);
        }
        if( node->right != nullptr){
            calculateSums( node->right, currentSum, sums);
        }
    }
}
vector<int> branchSums(BinaryTree *root) {
  // Write your code here.
  vector<int> sums;
  calculateSums(root, 0, sums);
  return sums;
}
