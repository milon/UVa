//UVa Problem-11821(High-Precision Number)
//Accepted
//Running time: 0.168 sec

import java.math.BigDecimal;
import java.util.Scanner;

public class UVa_11821{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		int test = input.nextInt();
		BigDecimal res = BigDecimal.ZERO;
		BigDecimal num = BigDecimal.ZERO;
		while(test-- !=0){
			res = BigDecimal.ZERO;
			num = BigDecimal.ZERO;
			do{
				res = res.add(num);
				num = input.nextBigDecimal();
				}while(num.compareTo(BigDecimal.ZERO)!=0);
			char output[] = res.toString().toCharArray();
			int len = output.length-1;
			while(len>=0 && output[len]=='0')
				len--;
			if(len>=0 && output[len]=='.')
				len--;
			for(int i=0;i<=len;i++)
				System.out.print(output[i]);
			System.out.println();
			}
		}
	}