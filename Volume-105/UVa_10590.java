//UVa Problem-10590(Boxes of Chocolates Again)
//Accepted
//Running time: 2.216 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10590{
	static BigInteger suru[][] = new BigInteger[2][5001];

	public static void makeTable(){
		for(int i=0;i<2;i++){
			for(int j=0;j<5001;j++){
				suru[i][j] = BigInteger.ZERO;
				}
			}
		suru[0][0] = BigInteger.ONE;
		for(int i=1;i<5001;i++){
			for(int j=0;j<5001;j++){
				if(j-i>=0)
					suru[1][j] = suru[0][j].add(suru[1][j-i]);
				else
					suru[1][j] = suru[0][j];
				}
			for(int j=0;j<5001;j++)
				suru[0][j] = suru[1][j];
			}
		}

	public static void main(String args[]){
		makeTable();
		Scanner input = new Scanner(System.in);
		while(input.hasNextInt()){
			int n = input.nextInt();
			System.out.println(suru[1][n]);
			}
		}

	}