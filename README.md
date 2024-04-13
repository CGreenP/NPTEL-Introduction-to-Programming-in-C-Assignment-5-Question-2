# NPTEL-Introduction-to-Programming-in-C-Assignment-5-Question-2
NPTEL Introduction to Programming in C Assignment 5 Question 2

# Question 2
Consider a matrix M of integers. Divide M into 4 sub-matrices. These sub-matrices are called as Quadrants. Report the Quadrant number which has the smallest minimum-element. If two or more quadrants have same smallest minimum, report the smallest quadrant index.

The matrix M is divided into four quadrants by halving the rows and columns. If row/column is an odd number, divide them in such a way that the first half of the row/column should be one smaller than the second half. 

The four quadrants are numbered from 1 to 4 in the structure shown below:
```
 Q1 | Q2
 ---+---
 Q3 | Q4
```


# INPUT FORMAT:
M is a matrix of integers. You would be given two numbers m and n specifying the number of rows and columns. This would be followed by m lines of n integers each specifying the data of the m*n matrix M.

n and m will be greater than 1 and less than 12.

# OUTPUT FORMAT:
Print in a separate line, the quadrant number with the smallest minimum-element.

# Sample Input 1
```sh
2 3
1 2 3
-1 3 4
```

# Sample Output 1
```sh
3
```

# Sample Input 2
```sh
4 4
-10 5 6 7
1 2 3 4
8 9 6 -5
-1 -1 -1 -1
```

# Sample Output 2
```sh
1
```

# Sample Input 3
```sh
4 4
-10 5 6 7
1 2 3 4
8 9 6 -5
-1 -1 -1 -100
```

# Sample Output 3
```sh
4
```
