//UVa Problem-10023(Square root)
//Accepted
//Running time: 2.108 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10023{

    static void solve(){
	BigInteger maxi = new BigInteger("100");
	BigInteger mini = new BigInteger("0");
	Scanner scanner = new Scanner(System.in);
	int te = scanner.nextInt();
	BigInteger left,right,mid,ans,tmid;
	BigInteger tar;
	while(true){
	    if(te == 0)
	    	break;
	    te--;
	    tar=scanner.nextBigInteger();
	    left=mini;
	    right=tar;
	    if(tar.compareTo(maxi) == 1)
			right=right.shiftRight(1);
	    while(right.shiftRight(3).pow(2).compareTo(tar) == 1){
			right = right.shiftRight(3);
		    }
	    ans=BigInteger.ZERO;
	    while(true){
			int cmp = right.compareTo(left);
			if (cmp == -1)
				break;
			mid =(right.add(left)).shiftRight(1);
			cmp=mid.pow(2).compareTo(tar);
			if(cmp == 0){
				ans=mid;
				break;
				}
			else if(cmp == -1){
		    	ans=mid;
		    	left=mid.add(BigInteger.ONE);
				}
			else
				right = mid.subtract(BigInteger.ONE);
	    	}
	    System.out.println(ans);
	    if(te!=0)
	    	System.out.println();
		}
    }

    public static void main(String args[]){
		UVa_10023.solve();
   		}

	}
