Given a number N, reverse the number.

Input Format

First and only line of input contains a integer - N.

Constraints

-1018 <= N <= 1018

Output Format

Print the reversed number.

Sample Input 0

1344
Sample Output 0

4431
Explanation 0

Self Explanatory.

//code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long n;
    long rev=0,r;
    scanf("%ld",&n);
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%ld",rev);
    return 0;
}
