/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief Sorts a dataset and performs basic statistical analysis.
 *
 * This program will sort an array of unsigned char data items and 
 * report the analytics on the maximum, minimum, mean, and median 
 * of the dataset.  All statistics will be rounded down to the 
 * nearest integer.  After analysis and sorting are completed the information will be printed to the screen.
 *
 * @author Christopher Hinton
 * @date 2023-11-18
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(unsigned char minimum, unsigned char maximum, 
                    int mean, unsigned char median); 

void print_array(unsigned char arr[], int length);  

unsigned char find_median(unsigned char arr[], int length); 

int find_mean(unsigned char arr[], int length);  

unsigned char find_maximum(unsigned char arr[], int length);  

unsigned char find_minimum(unsigned char arr[], int length); 

void sort_array(unsigned char arr[], int length);

void heapify(unsigned char arr[], int n, int i);

void heapSort(unsigned char arr[], int n);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
/* A function that prints the statistics of an array including minimum, 
    maximum, mean, and median.*/
void print_statistics(unsigned char minimum, unsigned char maximum, 
                    int mean, unsigned char median)
{
  printf("Here are a few basic statistical facts about the given dataset.");
  printf("Minimum: %d", minimum);
  printf("Maximum: %d", maximum);
  printf("Median: %d", median);
  printf("Mean: %d", mean);
} 

/* Given an array of data and a length, prints the array to the screen*/
void print_array(unsigned char arr[], int length)
{
  printf("The given array is as follows: ");
  for(int i = 0; i < length; i++)
  {
    printf((int)arr[i]);
  }
}  

/* Given an array of data and a length, returns the median value. */
unsigned char find_median(unsigned char arr[], int length)
{
  int num = (length + 1) / 2;
  unsigned char median = arr[num];

  return median;
} 

/* Given an array of data and a length, returns the mean. */
int find_mean(unsigned char arr[], int length)
{
  int total = 0;
  for(int i = 0; i < length; i++)
  {
    total += (int)arr[i];
  }
  return (int)total;
}  

/* Given an array of data and a length, returns the maximum. */
unsigned char find_maximum(unsigned char arr[], int length)
{
  return arr[0];
}  

/* Given an array of data and a length, returns the minimum. */
unsigned char find_minimum(unsigned char arr[], int length)
{
  return arr[length -1];
}

/* Given an array of data and a length, sorts the array from 
    largest to smallest.*/
void sort_array(unsigned char arr[], int length)
{
  heapSort(arr, length);
}

/* Heapify a subtree */
void heapify(unsigned char arr[], int n, int i)
{
 
    // Initialize largest as root
    int largest = i;
 
    // left = 2*i + 1
    int l = 2 * i + 1;
 
    // right = 2*i + 2
    int r = 2 * i + 2;
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest
    // so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, n, largest);
    }
}

/* Heap sort function */
void heapSort(unsigned char arr[], int n)
{
 
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element
    // from heap
    for (int i = n - 1; i > 0; i--) {
 
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
