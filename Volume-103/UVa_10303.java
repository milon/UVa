//UVa Problem-10303(How Many Trees?)
//Accepted
//Running time: 0.928 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10303{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		BigInteger tree[] = new BigInteger[1001];
		tree[0] = BigInteger.ONE;
		tree[1] = BigInteger.ONE;
		for(int i=2;i<1001;i++){
			tree[i] = BigInteger.ZERO;
			for(int j=0;j<i;j++)
				tree[i] = tree[i].add(tree[j].multiply(tree[i-j-1]));
			}
		while(input.hasNextInt()){
			int suru = input.nextInt();
			System.out.println(tree[suru]);
			}
		}
	}
