Given two integers a and b, compute a power b.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First and only line of input contains two positive integers a and b.

Constraints

1 <= a <= 100
0 <= b <= 9

Output Format

Print a power b.

Sample Input 0

2 3
Sample Output 0

8
Explanation 0

Self Explanatory.

Submissions: 34453
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More
//code
  import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
      
        System.out.print((long)Math.pow(a,b));
    }
}
