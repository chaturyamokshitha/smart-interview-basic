Given a positive integer N, check whether the number is prime or not.

Input Format

First and only line of input contains a integer - N.

Constraints

1 <= N <= 1012

Output Format

Print "Yes" if the number is prime, "No" otherwise.

Sample Input 0

11
Sample Output 0

Yes
Explanation 0

Self Explanatory

//code
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        long n=sc.nextLong();
        long i,flag=0;
        if(n==0||n==1)
            flag=1;
        for(i=2;i<Math.sqrt(n);++i){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}
