//
//  LinkList.hpp
//  AlgorithmPractice
//
//  Created by lizhi on 2018/11/9.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#ifndef LinkList_hpp
#define LinkList_hpp

#include <stdio.h>

struct LinkList {
    int value;
    struct LinkList *next;
};

//递归翻转链表
LinkList *RecursionReverseList(LinkList* pHead);

//用栈的方式翻转链表
LinkList *StackReverseList(LinkList* pHead);

//判断两个链表是否相交
bool is_list_intersect(LinkList* pHead1,LinkList* pHead2);

#endif /* LinkList_hpp */
