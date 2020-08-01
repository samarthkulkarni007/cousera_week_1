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
 * @brief header file statistic operation
 *
 *  The funtion mean,median,soring,max and min fucntions are represented
 *
 * @author Samarth kulkarni
 * @date 01-08-2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief This function prints all parameter of mean,median,max,min,array print and printing of sorted array
 *
 * @param the array of numbers
 * @param length
 * @return NULL
 */
void print_statistics(unsigned char arr[],unsigned int len);
/**
 * @brief This function prints all the array element
 *
 * @param the array of numbers
 * @param length
 * @return NULL
 */
void print_array(unsigned char arr[],int len);

/**
 * @brief This function finds the median of the array
 *
 * @param the array of numbers
 * @param length
 * @return Median value of array
 */
unsigned char find_median(unsigned char arr[],int len);

/**
 * @brief This function finds the mean of the array
 *
 * @param the array of numbers
 * @param length
 * @return Mean value of array
 */
unsigned char find_mean(unsigned char arr[],int len);
/**
 * @brief This function sorts and prints the array
 *
 * @param the array of numbers
 * @param length
 * @NULL
 */
void sort_array(unsigned char arr[],int len);

/**
 * @brief This function finds the maximum value of the array
 *
 * @param the array of numbers
 * @param length
 * @return Max value of array
 */
unsigned char find_max(unsigned char arr[],int len);
/**
 * @brief This function finds the Minimum value of the array
 *
 * @param the array of numbers
 * @param length
 * @return Min value of array
 */
unsigned char find_min(unsigned char arr[],int len);




#endif /* __STATS_H__ */
