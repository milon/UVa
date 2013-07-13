//UVa Problem-10733(The Colored Cubes)
//Accepted
//Running time: 0.196 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10733{
	static BigInteger nCk(Integer n, Integer k){
		BigInteger ret = BigInteger.ONE;
		BigInteger div = BigInteger.ONE;
		for(int i=1;i<=k;i++){
			ret = ret.multiply(BigInteger.valueOf(n-i+1));
			div = div.multiply(BigInteger.valueOf(i));
			}
		return ret.divide(div);
		}

	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		while(true){
			int n = input.nextInt();
			if(n == 0)
				break;
			BigInteger ans = BigInteger.ZERO;
			BigInteger mul = BigInteger.ONE;
			for(int k=1;k<=6;++k){
				if(n>=k){
					if(k == 1) mul = BigInteger.valueOf(1);
					if(k == 2) mul = BigInteger.valueOf(8);
					if(k == 3) mul = BigInteger.valueOf(30);
					if(k == 4) mul = BigInteger.valueOf(68);
					if(k == 5) mul = BigInteger.valueOf(75);
					if(k == 6) mul = BigInteger.valueOf(30);
					ans = ans.add(mul.multiply(nCk(n,k)));
					}
				}
			System.out.println(ans);
			}
		}
	}

