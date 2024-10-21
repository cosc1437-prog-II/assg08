/** @file assg08-library.cpp
 *
 * @brief Implementation file for Assignment 08: Arrays: Processing Arrays of Values
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   September 15, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
#include <string>
using namespace std;

/** @brief sum array of doubles and return sum
 *
 * Given an array of doubles, sum up all values in the array based on the
 * indicated array size and return the result sum of the array of values.  This
 * function allows for 0 sized arrays, in which case it returns a defualt sum
 * of 0.0 as the result.
 *
 * @param numValues The number of values in the array that is to be processed.
 * @param values An array of double values to be summed up.
 *
 * @returns double The sum of all of the values in the given array.  0.0 if the
 *   array is of size 0.
 */
double sumValues(int numValues, const double values[])
{
  // your code for task 1 goes here, don't forget to return
  // an appropriate result
  return 0.0;
}

/** @brief return largest value in array
 *
 * Given an array of integers, search the whole array to find the largest
 * value in the array.  Do not use a dummy value, start with the largest
 * as the value at index 0 and search all indexes 1..size to find any that
 * are larger.
 *
 * @param numValues The number of values in the array that is to be processed.
 * @param values An array of integer values to search for the largest value in
 *   the array.
 *
 * @returns int The largest integer value in the input array is returned as
 *   the result from calling this function.
 */
int maximumValue(int numValues, const int values[])
{
  // your code for task 2 goes here, don't forget to return
  // an appropriate result
  return 0;
}

/** @brief count occurrences of name in array
 *
 * Given an array of strings and a string to search for, count the number of times
 * that the name occurs or repeats in the given array of strings.
 *
 * @param numNames The number of names in the array that is to be processed.
 * @param names An array of string names to be counted
 * @param name The name as a string to be searched for and counted in the array
 *
 * @returns int The number of occurrences of the indicated name are counted and
 *   returned by this funciton.
 */
int countOccurrencesOfName(int numNames, const string names[], string name)
{
  // your code for task 3 goes here, don't forget to return
  // an appropriate result
  return 0;
}
