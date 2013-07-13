//UVa Problem-10430(Dear GOD, Pardon Me)
//Accepted
//Running time: 0.296 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10430{
	public static void main(String args[]){
		System.out.println("Dear GOD, Pardon Me");
		BigInteger t,n;
		boolean suru = false;
		Scanner input = new Scanner(System.in);
		while(input.hasNextBigInteger()){
			t = input.nextBigInteger();
			n = input.nextBigInteger();
			if(suru)
				System.out.println();
			else
				suru = true;
			BigInteger x = BigInteger.ONE;
			BigInteger k = t;
			for(int i=1;i<n.intValue();i++){
				x = x.add(k);
				k = k.multiply(t);
				}
			System.out.println("X = "+x.toString());
			System.out.println("K = "+k.toString());
			}
		}
	}