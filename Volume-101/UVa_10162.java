//UVa Problem-10162(Last Digit)
//Accepted
//Running time: 0.136 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10162{
    public static void main(String []args){
		Scanner scanner=new Scanner(System.in);
		BigInteger in;
		int[] len={0,1,2,2,1,1,1,2,2,1};
 		int[][] data={{0,0,0,0},
				      {1,1,1,1},
				      {4,6,0,0},
				      {7,3,0,0},
				      {6,0,0,0},
				      {5,0,0,0},
				      {6,0,0,0},
				      {3,7,0,0},
				      {6,4,0,0},
				      {9,0,0,0}};
		while(true){
		    in=scanner.nextBigInteger();
		    if (in.compareTo(BigInteger.valueOf(0)) == 0)break;
		    BigInteger ans=BigInteger.ZERO;
		    BigInteger num=in.divide(BigInteger.valueOf(10));
		    BigInteger mod=in.mod(BigInteger.valueOf(10));
		    for(int i=1;i<10;i++){
				BigInteger s=num;
				if (mod.compareTo(BigInteger.valueOf(i)) >= 0){
				    s=s.add(BigInteger.ONE);
					}
				BigInteger cnt=s.divide(BigInteger.valueOf(len[i]));
				for(int j=0;j<len[i];j++){
				    BigInteger mod2=s.mod(BigInteger.valueOf(len[i]));
				    if (len[i] != 1 && mod2.compareTo(BigInteger.valueOf(j)) ==1){
						ans=ans.add((cnt.add(BigInteger.ONE)).multiply(BigInteger.valueOf(data[i][j])));
					    }
					else {
						ans=ans.add(cnt.multiply(BigInteger.valueOf(data[i][j])));
						}
			    	ans=ans.mod(BigInteger.valueOf(10));
					}
 	    		}
	    	System.out.println(ans);
			}
    	}
	}
