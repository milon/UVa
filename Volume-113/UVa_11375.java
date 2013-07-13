//UVa Problem-11375(Matches)
//Accepted
//Running time: 0.452 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_11375{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		BigInteger suru[][] = new BigInteger[2][2001];
		BigInteger ans[] = new BigInteger[2001];
		int match[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
		for(int i=0;i<2001;i++)
			suru[0][i] = suru[1][i] = BigInteger.ZERO;
		suru[0][0] = BigInteger.ONE;
		for(int i=0;i<2001;i++){
			if(i-match[0]>=0)
				suru[0][i] = suru[0][i].add(suru[0][i-match[0]].add(suru[1][i-match[0]]));
			for(int j=1;j<10;j++)
				if(i-match[j]>=0)
					suru[1][i] = suru[1][i].add(suru[0][i-match[j]].add(suru[1][i-match[j]]));
			}
		ans[0] = BigInteger.ZERO;
		for(int i=1;i<2001;i++)
			ans[i] = suru[1][i].add(ans[i-1]);
		for(int i=match[0];i<2001;i++)
			ans[i]= ans[i].add(BigInteger.ONE);
		while(input.hasNextInt()){
			int n = input.nextInt();
			System.out.println(ans[n]);
			}
		}
	}

