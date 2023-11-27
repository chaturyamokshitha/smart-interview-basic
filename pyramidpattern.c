Print pyramid pattern using '*'. See example for more details.

Input Format

First and only line of input contains a single integer N - the size of the pyramid.

Constraints

1 <= N <= 50

Output Format

For the given integer, print pyramid pattern.

Sample Input 0

5
Sample Output 0

    *
   ***
  *****
 *******
*********
Explanation 0

Self Explanatory

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,j;
    scanf("%d",&n);
    int a=n;
    for(i=1;i<=n;i++){
        for(j=a-1;j>=1;j--){
        printf(" ");
    }a--;
        for(j=1;j<=(i+i-1);j++){
            printf("*");
        }
       printf("\n");}
    
    return 0;
}
