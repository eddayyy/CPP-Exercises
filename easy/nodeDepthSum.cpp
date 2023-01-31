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

void depthHelper(BinaryTree *root, int &nodeCounter){
    nodeCounter += 1;
    while(root != nullptr){
        if(root->right == nullptr && root->left == nullptr) return;
        else{
        if(root->left != nullptr) depthHelper(root->left, nodeCounter);
        if(root->right != nullptr) depthHelper(root->right, nodeCounter);
        }
    }
    return;
}

int nodeDepths(BinaryTree *root) {
  // Write your code here.
  int nodeCounter;
  depthHelper(root, nodeCounter);
  return nodeCounter;
}
