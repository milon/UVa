//UVa Problem-10069(Distinct Subsequences)
//Accepted
//Running time: 0.424 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10069{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		while(true){
			if(n == 0)
				break;
			n--;
			String a = input.next();
			String b = input.next();
			BigInteger table[][] = new BigInteger[2][a.length()];
			for(int i=0;i<a.length();i++){
				table[0][i] = BigInteger.ZERO;
				table[1][i] = BigInteger.ZERO;
				}
			if(a.charAt(0) == b.charAt(0))
				table[0][0] = BigInteger.ONE;
			else
				table[0][0] = BigInteger.ZERO;
			for(int i=1;i<a.length();i++){
				table[0][i] = table[0][i-1];
				if(a.charAt(i) == b.charAt(0))
					table[0][i] = table[0][i].add(BigInteger.ONE);
				}
			for(int i=1;i<b.length();i++){
				for(int j=i;j<a.length();j++){
					table[1][j] = table[1][j-1];
					if(b.charAt(i) == a.charAt(j))
						table[1][j] = table[1][j].add(table[0][j-1]);
					}
				for(int j=0;j<a.length();j++){
					table[0][j] = table[1][j];
					table[1][j] = BigInteger.ZERO;
					}
				}
			System.out.println(table[0][a.length()-1]);
			}
		}
	}