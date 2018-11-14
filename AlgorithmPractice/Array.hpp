//
//  Array.hpp
//  AlgorithmPractice
//
//  Created by lizhi54 on 2018/11/7.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class LZArray {
    
public:
    //二维数组中target,每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序
    bool bFind(int target, vector<vector<int>> array);
    
    //冒泡排序
    void BubbleSort(int A[],int const n);
    //选择排序
    void SelectionSort(int A[], int n);
    
    //快排
    void QuickSort(int A[], int left, int right);
    
    //递归实现的归并排序(自顶向下)
    void MergeSortRecursion(int A[], int left, int right);
    
    //统计一个数字在排序数组中出现的次数
    int GetNumberOfK(vector<int> data ,int k);
};



#endif /* Array_hpp */
