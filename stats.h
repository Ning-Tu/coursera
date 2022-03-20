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
 * @file <stats.h> 
 * @brief The header file of stats.c
 *	
 * 
 *
 * @author <Ning Tu>
 * @date <20.03.2022 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/**
 * Given an array of data and a length, prints the array to the screen
 * 
 * @param <array[]>  <array input>
 * @param <size>     <the size of array>
 */
 void print_array(int array[], int size);
 
/**
 * Find the median of an array.
 * 
 * @param <array[]>  <array input>
 * @param <size>     <the size of array>
 * @return The midian of the array
 */
int find_median(int array[], int size);

/**
 * Find the mean of an array.
 * 
 * @param <array[]>  <array input>
 * @param <size>     <the size of array>
 * @return The mean of the array
 * 
 */
int find_mean(int array[], int size);

/**
 * Find the maximum of an array.
 * 
 * @param <array[]>  <array input>
 * @param <size>     <the size of array>
 * @return The mean of the array
 * 
 */
int find_maximum(int array[], int size);

/**
 * Find the minimum of an array.
 * 
 * @param <array[]>  <array input>
 * @param <size>     <the size of array>
 * @return The minimum of the array
 * 
 */
int find_minimum(int array[], int size);

/**
 * Find the median of an array.
 * 
 * @param <array[]>  <array input>
 * @param <size>     <the size of array>
 * 
 */
void sort_array(int array[], int size);

/**
 * Find the statistics information of an array, including minimum, maximum, mean, median and sorted.
 * 
 * @param <array[]>  <array input>
 * @param <size>     <the size of array>
 * 
 */
void print_statistics(int array[], int size);




#endif /* __STATS_H__ */
