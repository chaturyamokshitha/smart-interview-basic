Given a matrix A of size N x M. Elements of the matrix are either 0 or 1. If A[i][j] = 0, set all the elements in the ith row and jth column to 0. Print the resultant matrix.

Input Format

First line of input contains N, M - the size of the matrix A. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
A[i][j] ∈ {0,1}

Output Format

Print the resultant matrix.

Sample Input 0

4 5
0 1 1 0 1 
1 1 1 1 1 
1 1 0 1 1 
1 1 1 1 1 
Sample Output 0

0 0 0 0 0 
0 1 0 0 1 
0 0 0 0 0 
0 1 0 0 1 
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
        int m=sc.nextInt();
        int[][]matrix=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=sc.nextInt();
            }
        }
        processMatrix(matrix,n,m);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static void processMatrix(int[][]matrix,int n,int m){
       boolean[] rowsToZero=new boolean[n];
        boolean[] columnsToZero=new boolean[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rowsToZero[i]=true;
                    columnsToZero[j]=true;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rowsToZero[i]||columnsToZero[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
}


