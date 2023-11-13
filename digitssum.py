Given a non-negative integer - N, print the sum of digits of the given number.

Input Format

First and only line of input contains a non-negative integer N.

Constraints

1 <= length(N) <= 103

Output Format

Print the sum of digits of the given number.

Sample Input 0

164
Sample Output 0

11
Explanation 0

Self Explanatory
//code
n=input()
sum=0

for i in n:
    sum=sum+int(i)
    
print(sum)
