//UVa Problem-10664(Luggage)
//Accepted
//Running time: 0.128 sec

import java.util.Scanner;
import java.util.Arrays;
import java.util.StringTokenizer;

public class UVa_10664{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		String suru, temp;
		int test = input.nextInt();
		suru = input.nextLine();
		while(test-- != 0){
			int array[] = new int[250];
			int i = 0;
			suru = input.nextLine();
			StringTokenizer stok = new StringTokenizer(suru);
			while(stok.hasMoreElements()){
				temp = stok.nextToken();
				array[i++] = Integer.parseInt(temp);
				}
			Arrays.sort(array);
			int hand1 = 0, hand2 = 0;
			int j = 0;
			while(j<i){
				if(hand1>=hand2)
					hand2 += array[array.length-j-1];
				else
					hand1 += array[array.length-j-1];
				j++;
				}
			if(hand1==hand2)
				System.out.println("YES");
			else
				System.out.println("NO");
			}
		}
	}