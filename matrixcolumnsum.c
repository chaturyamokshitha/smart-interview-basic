Given a matrix of size N x M, print column-wise sum, separated by a newline.

Input Format

The first line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-106 <= ar[i] <= 106

Output Format

Print column-wise sum of the matrix, separated by newline.

Sample Input 0

2 2
5 -1
19 8
Sample Output 0

24
7
Explanation 0

Self Explanatory.

  //code
  import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        int a[][]=new int[r][c];
        int i,j,sum=0;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                a[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<c;i++){
            sum=0;
            for(j=0;j<r;j++){
                sum=sum+a[j][i];
            }
            System.out.println(sum);
        }
        }
    }
