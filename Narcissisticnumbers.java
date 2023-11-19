import java.io.*;
import java.util.*;

public class Solution {
    static String result(String st){
int sum=0;
    int length=st.length();
    for(int i=0;i<length;i++){
        sum=sum+(int)Math.pow(st.charAt(i)-'0',length);
    }
    int number=Integer.parseInt(st);
    if(number==sum)
        return "Yes";
    else
        return "No";
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        String st=sc.nextLine();
        System.out.print(result(st));
    }
}
