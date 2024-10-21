---
name: 'Task 2: Find maximum value in an array of values'
about: Task 2 for Students
title: 'Task 2: Find maximum value in an array of values'
labels: enhancement
assignees: ''

---

For this task, you have been given the function prototype and
stub function for a `maximumValue()` function.  This function
takes an array of integer values as input (and the array size).
This function will assume that there is at least 1 value in the
input array.  You need to search the function and return the
largest integer value in the array as the result of this
function.

**Suggested Solution**

1. Create a local variable to keep track of the maximum value seen so
   far.  Initialize this to the value at index 0 of the `values[]` array
   that is passed in to this function.  This function assumes it is always called
   with an array of values of at least size 1 or bigger.
2. Use an index controlled `for` loop again to search indexes 1, 2 and so on up to
   the number of values in the array.  Anytime you find a value that is larger than any
   you have previously found, you should remember it as the maximum value you have seen
   so far.  If you implement this `for` loop correctly, when the size of the array passed
   in is just 1 item, the for loop will not run any iterations, and you should end up returning
   the value at index 0 of the passed in `values[]` array.
3. After you have searched for the maximum value, you should return the largest value that you
   see in the given input array of `values[]`.


**Additional Requirements**

- You are required to use an indexed controlled `for` loop in the
  implementation of this task.
- You are required to not use a special flag like `INT_MAX` in the
  implementation, instead you need to start with the value at index
  0 as the maximum seen so far, and then search indexes 1 and higher for
  any larger values.


