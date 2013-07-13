//UVa Problem-748(Exponentiation)
//Accepted
//Running time: 0.152 sec
//Author: Milon

import java.util.Scanner;
import java.math.BigDecimal;
import java.math.MathContext;

public class UVa_748{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		while(input.hasNextBigDecimal()){
			BigDecimal in = input.nextBigDecimal();
			int a = input.nextInt();
			BigDecimal ans = new BigDecimal(in.toString(),MathContext.UNLIMITED);
			for(int i=1;i<a;i++){
				ans = ans.multiply(in,MathContext.UNLIMITED);
				}
			String op = ans.toPlainString();
			int beg = 0, end = op.length();
			for(int i=0;i<op.length();i++)
				if(op.charAt(i)!='0'){
					beg = i;
					break;
					}
			for(int i=op.length()-1;i>=0;i--)
				if(op.charAt(i)!='0'){
					end = i;
					break;
					}
			for(int i=beg;i<=end;i++)
				System.out.print(op.charAt(i));
			System.out.println();
			}
		}
	}
