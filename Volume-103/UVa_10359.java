//UVa Problem-10359(Tiling)
//Accepted
//Running time: 0.024 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10359{
	public static void main(String args[]){
		int n = 255;
		BigInteger suru[] = new BigInteger[255];
		suru[0] = BigInteger.ZERO;
		suru[1] = BigInteger.ONE;
		suru[2] = BigInteger.valueOf(3);
		for(int i=3;i<n;i++){
			suru[i] = BigInteger.ZERO;
			suru[i] = suru[i].add(suru[i-2].multiply(BigInteger.valueOf(2)));
			suru[i] = suru[i].add(suru[i-1]);
			}
		suru[0] = BigInteger.ONE;
		int milon;
		Scanner input = new Scanner(System.in);
		while(input.hasNextInt()){
			milon = input.nextInt();
			System.out.println(suru[milon]);
			}
		}
	}
