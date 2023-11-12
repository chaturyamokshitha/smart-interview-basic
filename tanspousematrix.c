Given a matrix of size N x M, print transpose of the matrix.

Input Format

First line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-109 <= ar[i] <= 109

Output Format

Print the transposed of the given matrix.

Sample Input 0

2 2
5 -1
19 8
Sample Output 0

5 19
-1 8
Explanation 0

Self Explanatory

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int ar[100][100],N,i,j,M;
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++){
for(j=0;j<M;j++){
    scanf("%d",&ar[i][j]);
}}
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++){
            printf("%d ",ar[j][i]);
            if(j==N-1){
             printf("\n");   
            }
        }
    }
    return 0;
}
