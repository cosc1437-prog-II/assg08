/** @file assg08-tests.cpp
 *
 * @brief Unit tests for Assignment 08: Arrays: Processing Arrays of Values
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   October 21, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg08-library.hpp"
#include "catch.hpp"
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3

/** sumValues() test cases
 * Test implementation of sumValues() function that takes an array of doubles
 * and sums up and returns the sum of the values in the array
 */
#ifdef task1
TEST_CASE("Task 1 <sumValues()> tests", "[task1]")
{
  // tests have examples of declaring and intiializing statically allocated arrays
  // sum an array of 5 values to begin with
  double values[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  int numValues = 5;
  CHECK_THAT(sumValues(numValues, values), Catch::Matchers::WithinAbs(15.0, 0.000001));

  // test using num values and sum only first 3 values
  numValues = 3;
  CHECK_THAT(sumValues(numValues, values), Catch::Matchers::WithinAbs(6.0, 0.000001));

  // test sum size of 1 array
  numValues = 1;
  CHECK_THAT(sumValues(numValues, values), Catch::Matchers::WithinAbs(1.0, 0.000001));

  // by definition array of size 0 should return a sum of 0.0
  numValues = 0;
  CHECK_THAT(sumValues(numValues, values), Catch::Matchers::WithinAbs(0.0, 0.000001));

  // a different array with a few more values
  double values2[] = {-5.5, -4.4, 3.3, -3.3, 4.4, 5.5, 0.1234};
  numValues = 7;
  CHECK_THAT(sumValues(numValues, values2), Catch::Matchers::WithinAbs(0.1234, 0.000001));

  numValues = 6;
  CHECK_THAT(sumValues(numValues, values2), Catch::Matchers::WithinAbs(0.0, 0.000001));

  numValues = 3;
  CHECK_THAT(sumValues(numValues, values2), Catch::Matchers::WithinAbs(-6.6, 0.000001));

  numValues = 1;
  CHECK_THAT(sumValues(numValues, values2), Catch::Matchers::WithinAbs(-5.5, 0.000001));

  numValues = 0;
  CHECK_THAT(sumValues(numValues, values2), Catch::Matchers::WithinAbs(0.0, 0.000001));
}
#endif

/** maximumValue() test cases
 * Test implementation of maximumValue() function that searches for and returns
 * the maximum integer value in a given array.
 */
#ifdef task2
TEST_CASE("Task 2 <maximumValue()> tests", "[task2]")
{
  // an example of declaring and initializing static arrays
  // array of size 1 should return the only value in it as the maximum
  int values1[] = {42};
  int numValues = 1;

  CHECK(maximumValue(numValues, values1) == 42);

  // first value is still the largest
  int values2[] = {42, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  numValues = 10;
  CHECK(maximumValue(numValues, values2) == 42);

  // test correctly finding when last value is largest
  int values3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 42};
  numValues = 10;
  CHECK(maximumValue(numValues, values3) == 42);

  // test correctly finding when somewhere in the middle
  int values4[] = {1, 2, 3, 4, 5, 42, 6, 7, 8, 9};
  numValues = 10;
  CHECK(maximumValue(numValues, values4) == 42);

  // test a few random bigger tests with some negative numbers in them
  int values5[] = {29013, 592346, 394628, -659503, 453274, 97845, 602401, -880312, -469599, 155463, 945472, -835891, -189458, -431300,
    -416622, 506230, -18989, -653089, -174643, 996591, 950989, 41585, -572201, 831186, -673158};
  numValues = 25;
  CHECK(maximumValue(numValues, values5) == 996591);

  int values6[] = {-535572, 624668, 879097, -843769, 870732, 416437, 298986, -549824, -52073, -120080, -352531, -205026, -108313, 547372,
    49619, 584205, 668325, 399644, -422100, 14555, 452175, 401297, 144728, 664282, -319646};
  numValues = 25;
  CHECK(maximumValue(numValues, values6) == 879097);

  // test only using part of array asked for
  numValues = 4;
  CHECK(maximumValue(numValues, values5) == 592346);

  numValues = 2;
  CHECK(maximumValue(numValues, values6) == 624668);
}
#endif

/** countOccurrencesOfName() test cases
 * Test implementation of countOccurrencesOfName() function that counts the
 * number of times a name appears in a list (array) of names.
 */
#ifdef task3
TEST_CASE("Task 3 <countOccurrencesOfName()> tests", "[task3]")
{
  string names[] = {"neo", "trinity", "morpheus", "neo", "switch", "cyper", "mouse", "agent smith", "trinity", "neo"};
  int numNames = 10;

  // test some names that only occur 1 time
  CHECK(countOccurrencesOfName(numNames, names, "morpheus") == 1);
  CHECK(countOccurrencesOfName(numNames, names, "mouse") == 1);
  CHECK(countOccurrencesOfName(numNames, names, "agent smith") == 1);

  // trinity occurs 2 times and neo 3 times
  CHECK(countOccurrencesOfName(numNames, names, "trinity") == 2);
  CHECK(countOccurrencesOfName(numNames, names, "neo") == 3);

  // should return 0 when name does not occur
  CHECK(countOccurrencesOfName(numNames, names, "tank") == 0);
  CHECK(countOccurrencesOfName(numNames, names, "spoon boy") == 0);

  // neo only occurs 1 time in first 3 names, and twice in first 6
  CHECK(countOccurrencesOfName(3, names, "neo") == 1);
  CHECK(countOccurrencesOfName(6, names, "neo") == 2);

  // mouse doesn't occur in first 6 names
  CHECK(countOccurrencesOfName(6, names, "mouse") == 0);
}
#endif
