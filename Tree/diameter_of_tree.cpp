#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int diameter(node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
   
    int lh = 0, rh = 0;
    int lDiameter = diameter(root->left, &lh);
    int rDiameter = diameter(root->right, &rh);

    int currentDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(currentDiameter, max(lDiameter, rDiameter));
}



// int height(node * root){
//     if(root==NULL){
//         return 0;
//     }
//     if(root->left == NULL && root->right == NULL){
//         return 0;
//     }
//     int lheight = height(root->left);
//     int rheight = height(root->right);
//     return max(lheight,rheight) + 1;
// }

// int diameter(node * root){
//     if(root==NULL){
//         return 0;
    // }
//     if(root->left == NULL && root->right == NULL){
//         return 0;
//     }
//     int lHeight = height(root->left);
//     int rHeight = height(root->right);
//     int currentDiameter = lHeight + rHeight + 1;
//     int lDiameter = diameter(root->left);
//     int rDiameter = diameter(root->right);

//     return max(currentDiameter,max(lDiameter,rDiameter));
// }

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    int height = 0;
    cout << diameter(root, &height);
    // cout<<diameter(root);
}