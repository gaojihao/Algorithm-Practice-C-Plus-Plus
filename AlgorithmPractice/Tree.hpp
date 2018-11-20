//
//  Tree.hpp
//  AlgorithmPractice
//
//  Created by lizhi on 2018/11/9.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//重建二叉树
TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in);

//操作给定的二叉树，将其变换为源二叉树的镜像
void Mirror(TreeNode *pRoot);

#endif /* Tree_hpp */
