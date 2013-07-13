//UVa Problem-485(Pascal's Triangle of Death)
//Accepted
//Running time: 1.128 sec
//Author: Milon

import java.math.BigInteger;

public class UVa_485{
	public static void main(String args[]){
		BigInteger suru[][] = new BigInteger[300][300];
		suru[0][0] = BigInteger.ONE;
		for(int i=1;i<300;i++){
			suru[i][0] = BigInteger.ONE;
			for(int j=1;j<i;j++)
				suru[i][j] = suru[i-1][j-1].add(suru[i-1][j]);
			suru[i][i] = BigInteger.ONE;
			}
		BigInteger m = BigInteger.valueOf(10).pow(60);
		m = m.subtract(BigInteger.ONE);
		for(int i=0;i<300;i++){
			int s = 0;
			for(int j=0;j<=i;j++){
				if(m.compareTo(suru[i][j]) == -1)
					s=1;
				if(j!=0)
					System.out.print(" ");
				System.out.print(suru[i][j]);
				}
			System.out.println();
			if(s==1)
				return;
			}
		System.out.println("not enough");
		}
	}
