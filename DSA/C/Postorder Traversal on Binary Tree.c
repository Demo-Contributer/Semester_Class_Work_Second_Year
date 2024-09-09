#include <stdio.h>
#include <malloc.h>

struct Node{
  int val;
  struct Node* left;
  struct Node* right;
};

struct Node* CreateNode(int data){
  struct Node* root;
  root = (struct Node*) malloc(sizeof(struct Node));
  root->val = data;
  root->left = NULL;
  root->right = NULL;
  return root;
}

struct Node* BuildTree(){

  int data;
  printf("Enter data:- ");
  scanf("%d",&data);

  if (data == -1) return NULL;

  struct Node* root = CreateNode(data); 

  printf("Enter data in left of %d\n", data);
  root->left = BuildTree();

  printf("Enter data in right of %d\n", data);
  root->right = BuildTree();

  return root;
}

void Postorder(struct Node* root){
  if (root == NULL) return;

  Postorder(root->left);
  Postorder(root->right);
  printf("%d ", root->val);
}

int main () {
  struct Node* root = NULL;
  root = BuildTree();
  printf("Postorder Traversal is :- ");
  Postorder(root);
}