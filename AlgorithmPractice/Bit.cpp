//
//  Bit.cpp
//  AlgorithmPractice
//
//  Created by 栗志 on 2018/11/8.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#include "Bit.hpp"

int numberOf1(int n){
    int count = 0;
    int flag = 1;
    
    while (flag) {
        if ((n & flag) != 0) {
            count ++;
            
            n = (n-1) & n;
        }
    }
    
    return count;
};

int numberOf1Method2(int n){
    int count = 0;
    int flag = 1;
    
    while (flag) {
        if ((n & flag) != 0) {
            count ++;
        }
        flag = flag << 1;
    }
    return count;
};

int Add(int num1,int num2){
    while (num2 != 0) {
        int temp = num1 ^ num2;
        num2 = (num1&num2)<<1;
        num1 = temp;
    }
    return num1;
};
