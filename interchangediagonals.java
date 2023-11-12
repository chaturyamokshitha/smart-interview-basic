Given a matrix A of size NxN, interchange the diagonal elements from top to bottom and print the resultant matrix.

Input Format

First line of input contains N - the size of the matrix. Its followed by N lines each containing N integers - elements of the matrix.

Constraints

1 <= N <= 100
1 <= A[i][j] <= 10000

Output Format

Print the matrix after interchanging the diagonals.

Sample Input 0

4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output 0

4 2 3 1
5 7 6 8
9 11 10 12
16 14 15 13
Explanation 0

Self Explanatory

  //code
  import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[][]=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<n;i++){
            int temp=a[i][i];
            a[i][i]=a[i][n-i-1];
            a[i][n-i-1]=temp;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
    }
}
