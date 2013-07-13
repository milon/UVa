//UVa Problem-11827(Maximum GCD)
//Accepted
//Running time: 0.116 sec

import java.util.Scanner;
import java.util.StringTokenizer;

public class UVa_11827{
	static int gcd(int a, int b){
		if(b==0)
			return a;
		else
			return gcd(b,a%b);
		}

	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		String suru, temp;
		int test = input.nextInt();
		suru = input.nextLine();
		while(test-- != 0){
			int array[] = new int[110];
			int m=0;
			suru = input.nextLine();
			StringTokenizer stok = new StringTokenizer(suru);
			while(stok.hasMoreElements()){
				temp = stok.nextToken();
				array[m++] = Integer.parseInt(temp);
				}
			int max = -1;
			for(int i=0;i<m-1;i++){
				for(int j=i+1;j<m;j++){
					int val = gcd(array[i],array[j]);
					if(val>=max)
						max=val;
					}
				}
			System.out.println(max);
			}
		}
	}