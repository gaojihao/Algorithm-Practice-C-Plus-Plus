//
//  Other.cpp
//  AlgorithmPractice
//
//  Created by lizhi on 2018/11/9.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#include "Other.hpp"


int jump1(int n){
    if (n <= 2) {
        return n;
    }
    return jump1(n-1)+jump1(n-2);
};

int jump2(int n){
    if (n <= 2) {
        return n;
    }
    return 2*jump1(n-1);
};
