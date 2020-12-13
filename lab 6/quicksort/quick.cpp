#include<iostream>
#include"quick.h"
using namespace std;


void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    
    int i = (low - 1);   
  
    for (int j = low; j <= high- 1; j++) 
    { 
       if (arr[j] < pivot) 
        { i++;     
          swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i+1],&arr[high]); 
    return i+1; 
} 
  
void quicksort(int arr[], int low, int high,int k) 
{ 
    if (high-low>k-1) 
    { 
        int q = partition(arr, low, high);  
        quicksort(arr, low, q-1,k); 
        quicksort(arr, q+1, high,k); 
    } 
} 
