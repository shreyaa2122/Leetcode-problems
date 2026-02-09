#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& arr){
        if(!root) return;//if tree or subtree isempty then stop the recursion 
        inorder(root->left,arr);//check for leftsubtree as it holds small values 
        arr.push_back(root->val);
        inorder(root->right,arr);//holds large values.
    }
    TreeNode* build(int l,int r,vector<int>&arr){
        if(l>r)return NULL;
        int mid =(l+r)/2;
        TreeNode* root = new TreeNode(arr[mid]);//create a new noe using middle vaule and it becomes the root of current subtree 

        root->left= build(l,mid-1,arr);
        root->right=build(mid+1,r,arr);
        return root;
    }
    TreeNode* balanceBST(TreeNode*root){
        vector<int>arr;//empty array to store sorted values 
        inorder(root,arr);
        return build(0,arr.size()-1,arr);
    }
};