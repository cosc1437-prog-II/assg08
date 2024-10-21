---
name: 'Task 1: Summing an Array of Values'
about: Task 1 for Students
title: 'Task 1: Summing an Array of Values'
labels: enhancement, good first issue
assignees: ''

---

**Description**


Complete the given function named `sumValues()`.  This function
takes an array of integers (and the number of values in this array)
as parameters.  The function should sum up all of the values in the
given array and return the resulting sum from the function.


**Suggested Solution**

1. Declare a local variable that will keep track of the running sum of the values
   in the array.  This sum will be returned as the `double` result of this
   function.  You should initialize the calculated sum to `0.0` and if the
   `numValues` of the array is 0, then the sum returned is expected to be `0.0`.
2. You are required to use an indexed controlled `for` loop to process and sum up
   the values in the `values[]` array that is passed in as the second parameter.  The loop
   needs to access and add each value in the `values[]` array to the running sum.
3. After all values are processed, the sum of the values should be returned as the
   result of calling this function.


**Additional Requirements**

- You are required to use an indexed controlled `for` loop in the
  implementation of this task.
- You are required to correctly handle the case where an array of size 0 is
  given, in which case a sum of 0.0 should be returned as the function result.


