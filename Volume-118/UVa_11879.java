//UVa Problem-11879(Multiple of 17)
//Accepted
//Running time: 0.128 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_11879{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		BigInteger suru;
		while(true){
			suru = input.nextBigInteger();
			if(suru.compareTo(BigInteger.ZERO)==0)
				break;
			if(suru.mod(BigInteger.valueOf(17)).compareTo(BigInteger.ZERO)==0)
				System.out.println("1");
			else
				System.out.println("0");
			}
		}
	}