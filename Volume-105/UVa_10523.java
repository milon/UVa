//UVa Problem-10523(VERY EASY !!!)
//Accepted
//Running time: 0.980 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10523{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int n,a;
		while(input.hasNextInt()){
			n=input.nextInt();
			a=input.nextInt();
			BigInteger ans = BigInteger.valueOf(a);
			BigInteger s = BigInteger.valueOf(a);
			BigInteger temp = ans;
			for(int i=2;i<=n;i++){
				temp=temp.multiply(s);
				ans=ans.add(temp.multiply(BigInteger.valueOf(i)));
				}
			System.out.println(ans);
			}
		}
	}