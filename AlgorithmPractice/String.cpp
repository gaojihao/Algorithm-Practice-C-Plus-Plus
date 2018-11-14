//
//  String.cpp
//  AlgorithmPractice
//
//  Created by 栗志 on 2018/11/9.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#include "String.hpp"
#include <map>

void replaceSpace(char *str, int length){
    if (str == NULL) {
        return;
    }
    
    int blankCount = 0;
    int oldstringLen = 0;//记录原字符串的长度
    for (oldstringLen = 0; str[oldstringLen] != '\0'; oldstringLen++) {
        if (str[oldstringLen] == ' ') {
            blankCount ++;
        }
    }
    
    int len = oldstringLen + 2*blankCount;////新字符串的长度
    
    if (len > length) {
        return;
    }
    
    str[len] = '\0';
    
    //设置两个指针point1和point2分别指向原字符串和新字符串的末尾位置
    int point1 = oldstringLen - 1, point2 = len - 1;//因为'\0'已经手工加到最后新串的最后一个字符，所以减1
    
    while (point1 >= 0 && point2 > point1) {//如果point1指向为空格，那么从point2开始赋值'02%'
        if (str[point1] == '\0') {
            str[point2--] = '0';
            str[point2--] = '2';
            str[point2--] = '%';
        } else {
            str[point2--] = str[point1];//如果point1指向内容不为空格，那么将内容赋值给point2指向的位置
        }
        
        point1--;//不管是if还是else都要把point1前移,为了下一次的执行
    }

    
};

int FirstNotRepeatingChar(string str){
    map<char, int> mp;
    
    for (int i = 0; i < str.size(); i++) {
        mp[str[i]]++;
    }
    
    for (int i = 0; i < str.size(); i++) {
        if (mp[str[i]] == 1) {
            return i;
        }
    }
    
    return -1;
};
