//UVa Problem-10183(How many Fibs?)
//Accepted
//Running time: 0.376 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10183{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		BigInteger maximum,minimum;
		while(true){
			minimum = input.nextBigInteger();
			maximum = input.nextBigInteger();
			if(minimum.compareTo(BigInteger.ZERO)==0 && maximum.compareTo(BigInteger.ZERO)==0)
				break;
			BigInteger a = BigInteger.ONE;
			BigInteger b = BigInteger.valueOf(2);
			int count=0;
			if(minimum.compareTo(a)<=0 && maximum.compareTo(a)>=0)
				count++;
			if(minimum.compareTo(b)<=0 && maximum.compareTo(b)>=0)
				count++;
			BigInteger suru = BigInteger.ZERO;
			while(maximum.compareTo(suru)>=0){
				suru=a.add(b);
				if(minimum.compareTo(suru)<=0 && maximum.compareTo(suru)>=0)
					count++;
				a=b;
				b=suru;
				}
			System.out.println(count);
			}
		}
	}