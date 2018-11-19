//
//  String.hpp
//  AlgorithmPractice
//
//  Created by lizhi on 2018/11/9.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#ifndef String_hpp
#define String_hpp

#include <stdio.h>
#include <string>

using namespace std;

//请实现一个函数，将一个字符串中的每个空格替换成'%20'

void replaceSpace(char *str, int length);

//在一个字符串(0<=字符串长度<=10000，全部由字母组成)中找到第一个只出现一次的字符,并返回它的位置(区分大小写), 如果没有则返回 -1
int FirstNotRepeatingChar(string str);

#endif /* String_hpp */
