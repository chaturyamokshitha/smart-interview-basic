Print sum of all odd elements in an array.

Input Format

First line of input contains N - the size of the array and second line contains array elements.

Constraints

1 <= N <= 100
-109 <= ar[i] <= 109

Output Format

Print sum of all odd elements of the given array.

Sample Input 0

5
6 9 8 4 3
Sample Output 0

12
Explanation 0

Self Explanatory

//code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,odd=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        if(a[i]%2!=0)
            odd+=a[i];
    printf("%d\n",odd);
    return 0;
}
