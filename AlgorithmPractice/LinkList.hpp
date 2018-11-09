//
//  LinkList.hpp
//  AlgorithmPractice
//
//  Created by 栗志 on 2018/11/9.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#ifndef LinkList_hpp
#define LinkList_hpp

#include <stdio.h>

struct LinkList {
    int value;
    struct LinkList *next;
};

LinkList *RecursionReverseList(LinkList* pHead);
LinkList *StackReverseList(LinkList* pHead);

#endif /* LinkList_hpp */
