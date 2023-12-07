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
#ifndef __STATS_H__
#define __STATS_H__


/* A function that prints the statistics of an array including minimum, 
    maximum, mean, and median.*/
void print_statistics(unsigned char minimum, unsigned char maximum, 
                    int mean, unsigned char median); 

/* Given an array of data and a length, prints the array to the screen*/
void print_array(unsigned char arr[], int length);  

/* Given an array of data and a length, returns the median value. */
unsigned char find_median(unsigned char arr[], int length); 

/* Given an array of data and a length, returns the mean. */
int find_mean(unsigned char arr[], int length);  

/* Given an array of data and a length, returns the maximum. */
unsigned char find_maximum(unsigned char arr[], int length);  

/* Given an array of data and a length, returns the minimum. */
unsigned char find_minimum(unsigned char arr[], int length); 

/* Given an array of data and a length, sorts the array from 
    largest to smallest.*/
void sort_array(unsigned char arr[], int length);

/* Heapify a subtree */
void heapify(unsigned char arr[], int n, int i);

/* Heap sort function */
void heapSort(unsigned char arr[], int n);


#endif /* __STATS_H__ */
