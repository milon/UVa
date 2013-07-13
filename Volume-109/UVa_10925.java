//UVa Problem-10925(Krakovia)
//Accepted
//Running time: 0.720 sec

import java.math.BigInteger;
import java.util.Scanner;

public class UVa_10925{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int f = input.nextInt();
		int kase = 0;
		while(n!=0 || f!=0){
			 BigInteger sum = BigInteger.ZERO;
			 for(int i=0;i<n;i++){
				 BigInteger cost = input.nextBigInteger();
				 sum = sum.add(cost);
				 }
			System.out.printf("Bill #%d costs ",++kase);
			System.out.print(sum+": each friend should pay "+sum.divide(BigInteger.valueOf(f))+"\n\n");
			n = input.nextInt();
			f = input.nextInt();
			}
		}
	}