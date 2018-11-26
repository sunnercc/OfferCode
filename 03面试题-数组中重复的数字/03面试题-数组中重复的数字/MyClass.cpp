//
//  MyClass.cpp
//  03面试题-数组中重复的数字
//
//  Created by ifuwo on 2018/11/26.
//  Copyright © 2018 ifuwo. All rights reserved.
//


//https://www.cnblogs.com/onepixel/articles/7674659.html

class MyClass {
    
public:
    
    // 冒泡排序
    void bubbleSort(int arr[], int size)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - 1 - i; j++)
            {
                if (arr[j] > arr[j+1]) {
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
            }
        }
    }
    
    // 选择排序
    void selectSort(int arr[], int size)
    {
        for (int i = 0; i < size -1; i++) {
            int tag = i;
            for (int j = i+1; j < size - 1; j++) {
                if (arr[tag] > arr[j]) {
                    tag = j;
                }
            }
            if (tag != i) {
                int tmp = arr[i];
                arr[i] = arr[tag];
                arr[tag] = tmp;
            }
        }
    }
    
    // 插入排序
    void insertSort(int arr[], int size)
    {
        for (int i = 1; i <= size - 1; i++)
        {
            int j = i - 1;
            while (j >= 0) {
                if (arr[j] > arr[j + 1]) {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
                j--;
            }
        }
    }
    
    // 希尔排序
    void shellSort(int arr[], int size)
    {
        
    }
    
    // 归并排序
    void mergeSort(int arr[], int size)
    {
        
    }
    
    // 快速排序
    void quickSort(int arr[], int size)
    {
        
    }
    
    // 堆排序
    void heapSort(int arr[], int size)
    {
        
    }
    
    // 计数排序
    void countingSort(int arr[], int size)
    {
        
    }
    
    // 桶排序
    void bucketSort(int arr[], int size)
    {
        
    }
    
    // 基数排序
    void radixSort(int arr[], int size)
    {
        
    }
    
};
