//
//  main.cpp
//  AlgorithmPractice
//
//  Created by lizhi on 2018/11/7.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "Array.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    LZArray array = LZArray();
    
    int p[10] = {8,6,9,7,1,3,4,0,2,5};
    
    array.QuickSort(p, 0, sizeof(p)/sizeof(int)-1);
    
    for (int i = 0; i < 10; i++) {
        printf("%d",p[i]);
    }
    
    return 0;
}
