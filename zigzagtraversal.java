Given a matrix of size N x M, print the matrix in zig-zag order. Refer example for more details.

Input Format

The first line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-106 <= ar[i] <= 106

Output Format

Print the matrix elements in zig-zag order.

Sample Input 0

3 3
5 9 -2
-3 4 1
2 6 1
Sample Output 0

5 9 -2 1 4 -3 2 6 1

  //code
  import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int b[][]=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                b[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<m;j++){
                    System.out.print(b[i][j]+" ");
                }}
            else
            {
                for(int k=m-1;k>=0;k--){
                    System.out.print(b[i][k]+" ");
                }
            }
        }
        
    }
}
