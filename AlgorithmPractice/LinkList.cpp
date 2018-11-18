//
//  LinkList.cpp
//  AlgorithmPractice
//
//  Created by 栗志 on 2018/11/9.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#include "LinkList.hpp"
#include <stack>

using namespace std;

//递归翻转链表
LinkList *RecursionReverseList(LinkList* pHead){
    if (pHead == NULL || pHead->next == NULL) {
        return pHead;
    }
    
    LinkList* pReverseNode = RecursionReverseList(pHead->next);
    pHead->next->next = pHead;
    pHead->next = NULL;
    return pReverseNode;
};

//用栈翻转链表
LinkList *StackReverseList(LinkList* pHead){
    if (pHead == NULL || pHead->next == NULL) {
        return pHead;
    }
    
    stack<LinkList *>s;
    
    LinkList *p = pHead;
    while (p->next) {
        s.push(p);
        p = p->next;
    }
    
    
    LinkList *head = p;
    
    while (!s.empty()) {
        p->next = s.top();
        p = p->next;
        s.pop();
    }
    
    p->next = NULL;
    
    return head;
    
};


bool is_list_intersect(LinkList* pHead1,LinkList* pHead2){
    
    LinkList *pNode1 = pHead1->next;
    LinkList *pNode2 = pHead2->next;
    
    while (pNode1->next) {
        pNode1 = pNode1->next;
    }
    
    while (pNode2->next) {
        pNode2 = pNode2->next;
    }
    
    return pNode1 == pNode2;
}
