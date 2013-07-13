//UVa Problem-10198(Counting)
//Accepted
//Running time: 1.724 sec

import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

public class UVa_10198{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		BigInteger dp[] = new BigInteger[1000+10];
		Arrays.fill(dp, BigInteger.ZERO);

		dp[0] = BigInteger.valueOf(1);
		dp[1] = BigInteger.valueOf(2);
		dp[2] = BigInteger.valueOf(5);
		dp[3] = BigInteger.valueOf(13);

	    for(int i=4;i<=1000;i++){
	        dp[i] = dp[i].add(dp[i-1]);
	        dp[i] = dp[i].add(dp[i-2]);
	        dp[i] = dp[i].add(dp[i-3]);
	        dp[i] = dp[i].add(dp[i-1]);
			}
	    
	    int n;
	    while(input.hasNextInt()){
	    	n = input.nextInt();
	    	System.out.println(dp[n]);
			}
		}
	}
