//UVa Problem-10213(How Many Pieces of Land?)
//Accepted
//Running time: 0.776 sec

import java.util.Scanner;
import java.math.BigInteger;

public  class UVa_10213{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		String str = input.next();
		int test = Integer.valueOf(str);
		for(int i=1;i<=test;i++){
			BigInteger bg1 = input.nextBigInteger();
			BigInteger bg2 = BigInteger.ZERO;
			bg2 = bg2.add(bg1);
			bg2 = bg2.multiply(bg2);
			BigInteger bg3 = new BigInteger("5");
			bg3 = bg3.multiply(bg1);
			BigInteger bg4 = new BigInteger("18");
			bg2 = bg2.subtract(bg3);
			bg2 = bg2.add(bg4);
			BigInteger bg5 = new BigInteger("24");
			BigInteger bg6 = BigInteger.ZERO;
			bg6 = bg6.add(bg1);
			BigInteger bg7 = BigInteger.ONE;
			bg1 = bg1.subtract(bg7);
			bg2 = bg2.multiply(bg6);
		    bg2 = bg2.multiply(bg1);
		    bg2 = bg2.divide(bg5);
		    bg2 = bg2.add(bg7);
			System.out.println(bg2);
			}
		}
	}
