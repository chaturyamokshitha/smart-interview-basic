Given the length and breadth of a rectangle, print area of the rectangle.

Input Format

First and only line of input contains two positive integers L - length of the rectangle and B - breadth of the rectangle.

Constraints

1 <= L, B <=109

Output Format

Print area of the given rectangle.

Sample Input 0

5 8
Sample Output 0

40
Explanation 0

Self Explanatory

//code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long l,b;
scanf("%lu%lu",&l,&b);
    printf("%lu",l*b);
    return 0;
}
