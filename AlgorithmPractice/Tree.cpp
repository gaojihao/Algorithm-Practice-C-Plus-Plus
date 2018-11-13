//
//  Tree.cpp
//  AlgorithmPractice
//
//  Created by 栗志 on 2018/11/9.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#include "Tree.hpp"

TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in){
    int inlen=in.size();
    if (inlen == 0) {
        return NULL;
    }
    
    vector<int> left_pre,right_pre,left_in,right_in;
    //创建根节点
    TreeNode *head = new TreeNode(pre[0]);
    
    //找到中序遍历根节点所在位置,存放于变量gen中
    int gem = 0;
    for (int i = 0; i < inlen; i++) {
        if (in[i] == pre[0]) {
            break;
        }
    }
    
    //对于中序遍历，根节点左边的节点位于二叉树的左边，根节点右边的节点位于二叉树的右边
    //利用上述这点，对二叉树节点进行归并
    for (int i = 0; i < gem; i++) {
        left_in.push_back(in[i]);
        left_pre.push_back(pre[i+1]);//前序第一个为根节点
    }
    
    for (int i = gem+1; i < inlen; i++) {
        right_in.push_back(in[i]);
        right_pre.push_back(pre[i+1]);
    }
    head->left = reConstructBinaryTree(left_pre, left_in);
    head->right = reConstructBinaryTree(right_pre, right_in);
    return head;
};
