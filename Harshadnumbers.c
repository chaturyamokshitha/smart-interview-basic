Given an integer N, check whether it is a Harshad number or not.
Note: A Harshad number is an integer, that is divisible by the sum of its digits.

Input Format

First and only line of input contains a integer - N.

Constraints

1 <= N <= 109

Output Format

Print "Yes" if the number is a Harshad number, "No" otherwise.

Sample Input 0

18
Sample Output 0

Yes
Explanation 0

18 / (1 + 8) = 2
As 18 is divisible by the sum of its digits, it is a Harshad number.

  //code
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,sum=0;
    scanf("%d",&n);
    for(int i=n;i!=0;i/=10){
        sum+=i%10;}
        if(n%sum==0)
            printf("Yes\n");
        else
            printf("No\n");
    return 0;
}
