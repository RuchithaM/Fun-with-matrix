# fun-with-matrix

Given a 6x6 2D Array, A:

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0

We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:

a b c
d e f
g h i

There are 16 hourglasses in A , and an hourglass sum is the sum of an hourglass' values.

In the array shown above, the maximum hourglass sum is 7 for the hourglass in the top left corner.

Sample input:

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0

Sample output:
19

EXPLANATION:

A contains the following hourglasses:

1 1 1   1 1 0   1 0 0   0 0 0
0 1 0   1 0 0   0 0 0   0 0 0
1 1 1   1 1 0   1 0 0   0 0 0

0 1 0   1 0 0   0 0 0   0 0 0
0 1 1   1 1 0   1 0 0   0 0 0
0 0 2   0 2 4   2 4 4   4 4 0

1 1 1   1 1 0   1 0 0   0 0 0
0 0 2   0 2 4   2 4 4   4 4 0
0 0 0   0 0 2   0 2 0   2 0 0

0 0 2   0 2 4   2 4 4   4 4 0
0 0 0   0 0 2   0 2 0   2 0 0
0 0 1   0 1 2   1 2 4   2 4 0

The hourglass with the maximum sum (19) is:
2 4 4
0 2 0
1 2 4



