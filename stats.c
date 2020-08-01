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
 * @file stats.c 
 * @brief 
 *
 * Performing statistic operations on data
 *
 * @author Samarth Kulkarni
 * @date 01-08-2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);

}

/* Add other Implementation File Code Here */
	void print_statistics(unsigned char arr[],unsigned int len){

		printf("The given array:\n");
		print_array(arr,len);
		printf("The median is %d",find_median(arr,len));
		printf("The mean is %d",find_mean(arr,len));
		printf("The maximum value is %d",find_max(arr,len));
		printf("The minimun value is %d",find_min(arr,len));
		printf("The sorted array is ");		
		sort_array(arr,len);
	}
	
	void print_array(unsigned char arr[],int len){
		int i;		
		for(i=0;i<len;i++){
		printf("%d ",arr[i]);
		}
	}

	unsigned char find_median(unsigned char arr[],int len){
		return arr[(len-1)/2];

	
	}
	
	unsigned char find_mean(unsigned char arr[],int len){
		int i,sum;
		for(i=0;i<len;i++){
			sum=sum+arr[i];
		}
		
		return (unsigned char)(sum/len);
	}
	
	void sort_array(unsigned char arr[],int len){		
		int temp,i,j,k;
		for (i=0;i<len;i++){
			for(j=1;j<len;i++){
				if(arr[j]<arr[i]){
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
		 }
		printf("The sorted array is:");
		for(k=0;k<len;i++){
			printf("%d ",arr[k]);
		}
	}
	unsigned char find_max(unsigned char arr[],int len){
		int temp,i,j,k;
		for (i=0;i<len;i++){
			for(j=1;j<len;i++){
				if(arr[j]<arr[i]){
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
		 }
		return arr[0];
	}

	unsigned char find_min(unsigned char arr[],int len){
		int temp,i,j,k;
		for (i=0;i<len;i++){
			for(j=1;j<len;i++){
				if(arr[j]<arr[i]){
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
		 }
		return arr[len-1];
	}
	
	
		















































