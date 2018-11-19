//
//  Array.cpp
//  AlgorithmPractice
//
//  Created by lizhi on 2018/11/7.
//  Copyright © 2018年 com.lizhi1026. All rights reserved.
//

#include "Array.hpp"

//在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数
bool LZArray::bFind(int target, vector<vector<int> > array){
    
    unsigned long height = array.size();
    unsigned long width = array[0].size();
    
    
    unsigned long i = height - 1;
    unsigned long j = 0;
    
    while (i > 0 && j < width) {
        if (target < array[i][j]) {
            i--;
        }else if (target < array[i][j]){
            j++;
        }else {
            return true;
        }
    }
    
    return false;
}

//交换数组中的两个数
void Swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}


void LZArray::BubbleSort(int *A, const int n){
    
    int left = 0;
    int right = n-1;
    
    while (left < right) {
        
        for (int i = left; i < right; i++) {// 前半轮,将最大元素放到后面
            if (A[i] > A[i+1]) {
                Swap(A, i, i+1);
            }
        }
        
        right--;
        
        for (int i = right; i > left; i--) {// // 后半轮,将最小元素放到前面
            
            if (A[i-1] > A[i]) {
                Swap(A, i-1, i);
            }
        }
        
        left++;
        
    }
}

void LZArray::SelectionSort(int *A, int n){
    for (int i = 0; i < n - 1; i++){// i为已排序序列的末尾
        int min = i;
        
        for (int j = i + 1; j < n; j++) {
            
            if (A[j] < A[min])              //找出未排序序列中的最小值
            {
                min = j;
            }
            
            if (min != i)
            {
                Swap(A, min, i);    //放到已排序序列的末尾，该操作很有可能把稳定性打乱，所以选择排序是不稳定的排序算法
            }
        }
    }
}

int Partition(int A[], int left, int right)  // 划分函数
{
    int pivot = A[right];               // 这里每次都选择最后一个元素作为基准
    int tail = left - 1;                // tail为小于基准的子数组最后一个元素的索引
    for (int i = left; i < right; i++)  // 遍历基准以外的其他元素
    {
        if (A[i] <= pivot)              // 把小于等于基准的元素放到前一个子数组末尾
        {
            Swap(A, ++tail, i);
        }
    }
    Swap(A, tail + 1, right);           // 最后把基准放到前一个子数组的后边，剩下的子数组既是大于基准的子数组
    
    // 该操作很有可能把后面元素的稳定性打乱，所以快速排序是不稳定的排序算法
    return tail + 1;                    // 返回基准的索引
}

//QuickSort(A, 0, (sizeof(A) / sizeof(int)) - 1);
void LZArray::QuickSort(int *A, int left, int right){
    if (left >= right)
        return;
    int pivot_index = Partition(A, left, right); // 基准的索引
    QuickSort(A, left, pivot_index - 1);
    QuickSort(A, pivot_index + 1, right);
}

void Merge(int A[], int left, int mid, int right)// 合并两个已排好序的数组A[left...mid]和A[mid+1...right]
{
    int len = right - left + 1;
    int *temp = new int[len];       // 辅助空间O(n)
    int index = 0;
    int i = left;                   // 前一数组的起始元素
    int j = mid + 1;                // 后一数组的起始元素
    while (i <= mid && j <= right)
    {
        temp[index++] = A[i] <= A[j] ? A[i++] : A[j++];  // 带等号保证归并排序的稳定性
    }
    while (i <= mid)
    {
        temp[index++] = A[i++];
    }
    while (j <= right)
    {
        temp[index++] = A[j++];
    }
    for (int k = 0; k < len; k++)
    {
        A[left++] = temp[k];
    }
}

void LZArray::MergeSortRecursion(int *A, int left, int right){
    
    if (left == right)    // 当待排序的序列长度为1时，递归开始回溯，进行merge操作
        return;
    int mid = (left + right) / 2;
    MergeSortRecursion(A, left, mid);
    MergeSortRecursion(A, mid + 1, right);
    Merge(A, left, mid, right);
}

int LZArray::GetNumberOfK(vector<int> data ,int k){
    
    
    return 0;
}

int LZArray:: RectCover(int n){
    if (n <= 2){
        return n;
    }
    
    return RectCover(n-1)+RectCover(n-2);
}
