using namespace std;

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

void depthHelper(BinaryTree *root, int nodeCounter, int &total){
  nodeCounter += 1;
  if(root->left != nullptr) {
    total += nodeCounter;
    depthHelper(root->left, nodeCounter, total);
  }
  if(root->right != nullptr) {
    total += nodeCounter;
    depthHelper(root->right, nodeCounter, total);
  }
  return;

}

int nodeDepths(BinaryTree *root) {
  // Write your code here.
  int nodeCounter = 0;
  int total = 0;
  depthHelper(root, nodeCounter, total);
  return total;
}
