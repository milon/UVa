//UVa Problem-763(Fibinary Numbers)
//Accepted
//Running time: 1.808 sec
//Author: Milon

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_763{
    static BigInteger getd(String a, BigInteger fib[]){
		BigInteger ret = BigInteger.ZERO;
		for(int i=0;i<a.length();i++){
	    	if(a.charAt(i) == '1'){
				ret = ret.add(fib[a.length()-1-i]);
	    		}
			}
		return ret;
    	}

    public static void main(String args[]){
		int N = 210;
		Scanner input = new Scanner(System.in);
		BigInteger fib[] = new BigInteger[210];

		fib[0]=BigInteger.ONE;
		fib[1]=BigInteger.valueOf(2);
		for(int i=2;i<N;i++){
	    	fib[i] = fib[i-1].add(fib[i-2]);
			}
		int test = 1;
		while(input.hasNext()){
	    	if(test == 2)
	    		System.out.println("");
	    	test = 2;
	  		BigInteger ans = BigInteger.ZERO;
	   		String a = input.next();
	    	ans = getd(a,fib);
	    	a = input.next();
	    	ans = ans.add(getd(a,fib));
	    	boolean suru = false;
	    	for(int i=N-1;i>=0;i--){
				if(ans.compareTo(fib[i]) >= 0){
		    		suru = true;
		    		System.out.print("1");
		    		ans = ans.subtract(fib[i]);
					}
				else if(suru){
		    		System.out.print("0");
					}
	    		}
	    	if(!suru)
	    		System.out.print("0");
	    	System.out.println();
			}
    	}
	}
