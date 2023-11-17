Given a non-negative number - N, print N!

Input Format

First and only line of input contains a number - N.

Constraints

0 <= N <= 10

Output Format

Print factorial of N.

Sample Input 0

5
Sample Output 0

120
Explanation 0

Self Explanatory

//code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int f=1,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f*=i;
    }
    printf("%d",f);
    return 0;
}
