Given an array of elements containing 0's and 1's. You have to find the length of longest contiguous 1's.

Input Format

First line of input contains N - size of the array. The next line contains the N integers of array A.

Constraints

1 <= N <= 1000

Output Format

Print the length of longest contiguous 1's.

Sample Input 0

10
1 0 0 1 0 1 1 1 1 0 
Sample Output 0

4
Explanation 0

Self Explanatory

//code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long n;
    scanf("%ld",&n);
    int a[n],i,j,c=0,max=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        if(a[j]==1){
            c++;
        if(max<c)
            max=c;
        }
        else
            c=0;
    }
    printf("%d",max);
    return 0;
}


