Find maximum element from the given array of integers.

Input Format

First line of input contains N - the size of the array and second line contains the elements of the array.

Constraints

1 <= N <= 100
-109 <= ar[i] <= 109

Output Format

Print the maximum element of the given array.

Sample Input 0

5
-2 -19 8 15 4
Sample Output 0

15
Explanation 0

Self Explanatory



//code
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i;
    scanf("%d",&n);
    int a[n],ans;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    ans=a[0];
    for(i=1;i<n;i++){
if(a[i]>ans)
        ans=a[i];
    }
    printf("%d\n",ans);
    return 0;
}
