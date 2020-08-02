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

#define SIZE (40)

unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


void main()
 {
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test,SIZE);
  sort_array(test,SIZE);
  print_statistics();

}

/* Add other Implementation File Code Here */
	void print_statistics()
	 {
	     int mean,median,max,min;
         /*mean=find_mean(test,SIZE);*/
         median=find_median(test,SIZE);
         max=find_maximum(test,SIZE);
         min=find_minimum(test,SIZE);
		printf("\n");
		printf("The median is:   %d   \n ", median );
		printf("The mean is:   %d      \n", find_mean(test,SIZE) );
		printf("The maximum value is:   %d   \n ", max );
		printf("The minimun value is:   %d    \n", min);
	}
	
	void print_array(unsigned char *arr,unsigned int len)
	 {
		int i;	
		printf("The array lenght is   %d  : \n",len);
		printf("The array given array is \n");
		for(i=0;i<len-1;i++)
		{
		    printf(" %d   \t",arr[i]);
		}
	}

	int find_median(unsigned char *arr,unsigned int len)
	{
		int media;
		media=arr[(len)/2];
		return media;

	
	}
	
	int find_mean(unsigned char *arr,unsigned int len)
	 {
		int i=0,mea=0,sum=0;
		for(i=0;i<len;i++){
			sum+=arr[i];
		}
		mea=sum/len;
		return mea;
	}
	
	void sort_array(unsigned char *arr,unsigned int len)
	 {		
		int temp,i,j,k;
		for(i=0;i<len;i++){
			for(j=0;j<len-1;j++){
				if(arr[j]<arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		 }
		printf("\nThe sorted array is:\n");
		for(k=0;k<len;k++)
		{
		    printf("%d \t",arr[k]);
		}
		
	}
	int find_maximum(unsigned char *arr,unsigned int len) 
	{
		int temp,i,j,k,maxi;
		for(i=0;i<len;i++){
			for(j=0;j<len-1;j++){
				if(arr[j]<arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		 }
		 maxi=arr[0];
		return maxi;
	}

    int find_minimum(unsigned char *arr,unsigned int len) 
	{
		int temp,i,j,k,mini;
		for(i=0;i<len;i++){
			for(j=0;j<len-1;j++){
				if(arr[j]<arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		 }
		 mini=arr[len-1];
		return mini;
	}

	
	
		















































