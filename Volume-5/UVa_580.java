//UVa Problem-580(Critical Mass)
//Accepted
//Running time: 0.292 sec
//Author: Milon

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_580{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int n;
		final int MAX = 10000;
		BigInteger suru[][] = new BigInteger[MAX+1][3];
		BigInteger two[] = new BigInteger[MAX];
		BigInteger milon = BigInteger.valueOf(2);
		suru[1][0] = BigInteger.ONE;
		suru[1][1] = BigInteger.ONE;
		suru[1][2] = BigInteger.ZERO;
		two[1] = milon;
		for(int i=2;i<MAX;i++){
			two[i]=milon.multiply(two[i-1]);
			suru[i][0] = suru[i-1][0].add(suru[i-1][1]).add(suru[i-1][2]);
			suru[i][1] = suru[i-1][0];
			suru[i][2] = suru[i-1][1];
			}
		while(true){
			n = input.nextInt();
			if(n==0)
				break;
			BigInteger sm = two[n].subtract(suru[n][0]).subtract(suru[n][1]).subtract(suru[n][2]);
			System.out.println(sm);
			}
		}
	}
