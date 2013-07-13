//UVa Problem-619(Numerically Speaking)
//Accepted
//Running time: 1.332 sec
//Author: Milon

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_619{
    static String reverse(String a){
		String ret = new String("");
		int len = a.length()-1;
		for(int i=len;i>=0;i--){
		    ret = ret+a.charAt(i);
			}
		return ret;
    	}

    static String itor(BigInteger a){
		String ret = new String("");
		BigInteger div = BigInteger.valueOf(26);
		while(a.compareTo(BigInteger.ZERO) != 0){
		    BigInteger tmp = a.mod(div);
		    a = a.divide(div);
		    long val = tmp.longValue();
		    ret = ret+(char)('a'+(val-1+26)%26);
		}
		if(ret.length() == 0)
			return new String("a");
		return reverse(ret);
    	}

    static String rtoi(String a){
		BigInteger ret = BigInteger.ZERO;
		BigInteger mul = BigInteger.valueOf(26);
		BigInteger cur = BigInteger.ONE;
		for(int i=a.length()-1;i>=0;i--){
		    long tmp = a.charAt(i)-'a'+1;
		    ret = ret.add(cur.multiply(BigInteger.valueOf(tmp)));
		    cur = cur.multiply(mul);
			}
		return ret.toString();
    	}

    static String convert(String a){
		String ret = new String("");
		a = reverse(a);
		for(int i=0;i<a.length();i++){
		    if(i != 0 && i%3==0)
		    	ret = ret+',';
		    ret = ret+a.charAt(i);
			}
		return reverse(ret);
    	}

    public static void main(String args[]){
		Scanner scanner = new Scanner(System.in);
		while(true){
		    String str,val;
		    str = scanner.nextLine();
		    if(str.charAt(0)=='*')
		    	break;
		    if(str.charAt(0) <= '9'){
				val = str;
				str = itor(new BigInteger(val));
		    	}
		    else{
				val = rtoi(str);
			    }
		    int tmp = str.length();
		    System.out.print(str);
		    for(int i=tmp;i<22;i++)
		    	System.out.print(' ');
		    val = convert(val);
		    System.out.println(val);
			}
    	}
	}
