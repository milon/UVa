//UVa Problem-10519(!! Really Strange !!)
//Accepted
//Running time: 0.172 sec
//

import java.math.BigInteger;
import java.util.Scanner;

public class UVa_10519{
	static BigInteger ZER = new BigInteger("0");
	static BigInteger ONE = new BigInteger("1");
	static BigInteger TWO = new BigInteger("2");
	
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		while(in.hasNext()){
			BigInteger N = in.nextBigInteger();
			BigInteger V = N.multiply(N.subtract(ONE));
			if(N.compareTo(ZER) <= 0)
				V = V.add(ONE);
			else
				V = V.add(TWO);
			System.out.println(V);
			}
		}
	
	}

