//UVa Problem-10007(How Many Trees?)
//Accepted
//Running time: 0.536 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10007{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		while(n!=0){
			if(n==1)
				System.out.println("1");
			else{
				BigInteger suru = BigInteger.ONE;
				for(int i=n+2;i<=2*n;i++)
					suru = suru.multiply(BigInteger.valueOf(i));
				System.out.println(suru);
				}
			n = input.nextInt();
			}
		}
	}
