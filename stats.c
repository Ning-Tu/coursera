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
 * @file <stats.c> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Ning Tu>
 * @date <18.03.2022>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() 
{
  int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

print_statistics(test, SIZE);
return 0;
}

/* Add other Implementation File Code Here */
void print_statistics(int array[], int size) 
{
	int max, min, mean, median;
  max=find_maximum(array,size);
  min=find_minimum(array,size);
  mean=find_mean(array,size);
  median=find_median(array,size);
  sort_array(array,size);
  printf("The minimum of the array is %d;\n",min);
  printf("The maximum of the array is %d;\n",max);
  printf("The mean of the array is %d;\n",mean);
  printf("The median of the array is %d;\n",median);
  printf("Sort the array from large to small:\n");
  print_array(array,size);
	  
}
void print_array(int array[], int size)
{
  int i;
  for(i=0;i<size;i++)
    printf("%d ", array[i]);
}

int find_maximum(int array[], int size)
{
  int i, max=array[0];
  for(i=1; i<size; i++)
  {
    if(array[i]>max)
        max=array[i];
  }
  return max;
}
int find_minimum(int array[], int size)
{
  int i, min=array[0];
  for(i=1; i<size; i++)
  {
    if(array[i]<min)
      min=array[i];
  }
  return min;
}

int find_mean(int array[], int size)
{
  int i, mean, sum=array[0];
  for(i=0; i<size-1; i++)
  {
    sum=sum+array[i];
  }
  mean=sum/size;
  return mean;
}

int find_median(int array[], int size)
{
  int median;
  if(size%2==0)
  {
    median=(array[size/2-1]+array[size/2])/2;
  }
  else
  {
    median=array[size/2]; 
  }
  return median;
}

void sort_array(int array[], int size)
{
  int i,j, temp;
  for(i=0; i<size-1; i++)
  {
    for(j=0;j<size-1-i; j++)
    {
      if(array[j]<array[j+1]) 
      {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
}

