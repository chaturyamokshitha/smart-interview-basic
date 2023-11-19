Given a positive integer N, print the sum of cubes of 1st N natural numbers.

Input Format

First and only line of input contains a positive integer - N.

Constraints

1 <= N <= 102

Output Format

Print the sum of cubes of 1st N natural numbers.

Sample Input 0

4
Sample Output 0

100
Explanation 0

Self Explanatory

//code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=(i*i*i);
    }
    printf("%d",sum);
    return 0;
}
