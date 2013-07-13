//UVa Problem-11161(Help My Brother (II))
//Accepted
//Running time: 0.256 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_11161{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int kase=0;
		BigInteger suru[] = new BigInteger[1500+10];
		suru[1] = BigInteger.ZERO;
		suru[2] = BigInteger.ONE;
		for(int i=3;i<=1505;i++)
			suru[i] = suru[i-1].add(suru[i-2]).add(BigInteger.ONE);
		int n = input.nextInt();
		while(n!=0){
			BigInteger median = suru[n].add(suru[n+1]).subtract(BigInteger.ONE).divide(BigInteger.valueOf(2));
			System.out.printf("Set %d:\n",++kase);
			System.out.println(median);
			n = input.nextInt();
			}
		}
	}