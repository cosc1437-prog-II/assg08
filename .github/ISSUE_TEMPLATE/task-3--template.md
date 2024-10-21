---
name: 'Task 3: Count occurrences of a value in an array'
about: Task 3 for Students
title: 'Task 3: Count occurrences of a value in an array'
labels: enhancement
assignees: ''

---

In task 3 you have again been given a function signature and stub function
for the `countOccurrencesOfName()` function.  This function has a slightly
different signatrue than before.  It has the `numNames` and an array
of `names[]` as the first 2 parameters as before. But a third parameter 
of type `string` called `name` is given as the last parameter input
for the function.

Implement the function to count up all of the occurrences/duplicate
of the `name` in the array of `names` passed in to the function.
This function should work even if passed in an array of size 0, in which
case it should return a result of 0 occurrences.

**Suggested Solution**

1. Again create a local variable to keep track of the number of occurrences of the
   name that you see while counting them up when processing the `names[]` array.
   This count should be initialized to 0, and it is possible to be given an empty
   array of `names[]` for this function in which case a result of 0 is expected to be
   returned.
2. Again you are required to use an index controlled `for` loop that iterates over all
   indexes from 0 to the number of names in the input array.  You should test each value
   in the `names[]` array to see if it contains the `name` being searched for.  As a big hint,
   you can use a simple boolean expression to test if an array value is equal to the `name`
   being searched for, for example:
   
  ```
  if (names[index] == name)
  {
    // then the name at the current index is an occurrence of the name we are counting up
  }
  ```

3. Once you have iterated over the array and counted all occurrences, you need to return the count
   of the occurrences/duplicates of the indicated name as the result from this function.

**Additional Requirements**

- You are required to use an indexed controlled `for` loop in the
  implementation of this task.
- You are required to correctly handle a 0 sized input array, in which
  case 0 occurrences should be returned as the result from the function.
