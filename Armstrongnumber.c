Given an integer N, check whether it's an Armstrong number or not.
Note: Armstrong number is a number that is equal to the sum of cubes of its digits.

Input Format

First and only line of input contains a integer - N.

Constraints

0 <= N <= 109

Output Format

Print "Yes" if the number is an Armstrong number, "No" otherwise.

Sample Input 0

153
Sample Output 0

Yes
Explanation 0

13 + 53 + 33 = 153


  //code
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,r,cube=0,sum=0,num;
    scanf("%d",&num);
    n=num;
    while(n!=0){
        r=n%10;
        cube=r*r*r;
        sum=cube+sum;
        n=n/10;
    }
    if(sum==num){
        printf("Yes\n");
    } 
    else
        printf("No");

        
    return 0;
}
