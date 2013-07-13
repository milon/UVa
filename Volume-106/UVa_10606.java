//UVa Problem-10606(OPENING DOORS)
//Accepted
//Running time: 1.800 sec

import java.util.Scanner;
import java.math.BigInteger;
public class UVa_10606{
	static void solve(){
		BigInteger ten = new BigInteger("10");
		BigInteger maximum = ten.pow(50);
		BigInteger minimum = BigInteger.ONE;
		BigInteger two = new BigInteger("2");
		Scanner input = new Scanner(System.in);
		BigInteger n;
		while(true){
			BigInteger tar = input.nextBigInteger();
			if(tar.compareTo(BigInteger.ZERO)==0)
				break;
			BigInteger left = minimum;
			BigInteger right = maximum;
			BigInteger mid, tmid;
			BigInteger ans = BigInteger.ONE;
			while(true){
				int cmp = right.compareTo(left);
				if(cmp == -1)
					break;
				mid = right.add(left);
				mid = mid.divide(two);
				tmid = mid;
				mid = mid.multiply(mid);
				cmp = mid.compareTo(tar);
				if(cmp == 0){
					ans = mid;
					break;
					}
				else if(cmp == -1){
					ans = mid;
					left = tmid.add(BigInteger.ONE);
					}
				else
					right = tmid.subtract(BigInteger.ONE);
				}
			System.out.println(ans);
			}
		}

	public static void main(String args[]){
		UVa_10606.solve();
		}

	}
