//UVa Problem-10497(Sweet Child Makes Trouble)
//Accepted
//Running time: 0.032 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10497{
    static void fact(BigInteger in[], BigInteger integ[]){
		in[0] = BigInteger.ONE;
		integ[0] = BigInteger.ZERO;
		for(int i=1;i<801;i++){
	    	integ[i] = new BigInteger(Integer.toString(i));
	  		in[i] = in[i-1].multiply(integ[i]);
			}
    	}

    static void combination(BigInteger in[][]){
		for(int i=0;i<801;i++){
	    	in[i][0] = BigInteger.ONE;
	    	in[i][i] = BigInteger.ONE;
	  	  	for(int j=1;j<i;j++){
				in[i][j]=in[i-1][j-1].add(in[i-1][j]);
	    		}
			}
    	}

    public static void main(String args[]){
		BigInteger f[] = new BigInteger[801];
		BigInteger ans[] = new BigInteger[801];
		BigInteger integ[] = new BigInteger[801];
		BigInteger comb[][] = new BigInteger[801][801];
		BigInteger tmp;
		fact(f,integ);
		combination(comb);
		ans[0]=BigInteger.ZERO;
		ans[1]=BigInteger.ZERO;
		ans[2]=new BigInteger("1");
		for(int i=3;i<801;i++){
	    	ans[i]=f[i].subtract(BigInteger.ONE);
	    	for(int j=1;j<i;j++){
				tmp=comb[i][j].multiply(ans[i-j]);
				ans[i]=ans[i].subtract(tmp);
	    		}
			}
		Scanner input = new Scanner(System.in);
		int n;
		while(input.hasNextInt()){
	    	n=input.nextInt();
	    	if(n == -1)
	    		break;
	    	System.out.println(ans[n]);
			}
    	}

	}

