//UVa Problem-10515(Power et al.)
//Accepted
//Running time: 0.044 sec

import java.util.Scanner;
import java.math.BigInteger;

public class UVa_10515{
    static BigInteger ten = new BigInteger("10");
    static BigInteger two = new BigInteger("2");
    static BigInteger three = new BigInteger("3");
    static BigInteger four = new BigInteger("4");
    static BigInteger five  = new BigInteger ("5");
    static BigInteger six  = new BigInteger("6");
    static BigInteger seven  = new BigInteger("7");
    static BigInteger eight  = new BigInteger("8");
    static BigInteger nine  = new BigInteger("9");

    static BigInteger mypow(BigInteger n,BigInteger b){
        if(n.compareTo(BigInteger.ZERO) == 0)
        	return BigInteger.ONE;
        BigInteger tmp = mypow(n.divide(two),b);
        tmp = tmp.multiply(tmp);
        if(n.mod(two).compareTo(BigInteger.ONE) == 0){
            tmp = tmp.multiply(b);
        	}
        tmp= tmp.mod(ten);
        return tmp;
    	}

    public static void main(String  args[]){
        Scanner input = new Scanner(System.in);
        BigInteger n,m;
        BigInteger div[] = new BigInteger[10];
        div[0] = BigInteger.ONE;
        div[1] = BigInteger.ONE;
        div[2] = four;
        div[3] = four;
        div[4] = two;
        div[5] = BigInteger.ONE;
        div[6] = BigInteger.ONE;
        div[7] = four;
        div[8] = four;
        div[9] = two;
        int array[] = new int[10];
        int array2[][]= new int[10][4];
        array[0] = 1;
        array[1] = 1;
        array[2] = 4;
        array[3] = 4;
        array[4] = 2;
        array[5] = 1;
        array[6] = 1;
        array[7] = 4;
        array[8] = 4;
        array[9] = 2;
        for(int i=0;i<10;i++){
            int now = i;
            for(int j=0;j<array[i];j++){
                array2[i][j] = now;
                now = (now*i)%10;
            	}
        	}
        while(true){
            m = input.nextBigInteger();
            n = input.nextBigInteger();
            if(n.compareTo(BigInteger.ZERO) == 0 && m.compareTo(BigInteger.ZERO) == 0){
                break;
            	}
            int mm = m.mod(ten).intValue();
	        if(n.compareTo(BigInteger.ZERO) == 0){
                System.out.println(1);
                continue;
            	}
            int nn = n.mod(div[mm]).intValue();
            nn = (nn+array[mm]-1)%array[mm];
            System.out.println(array2[mm][nn]);
        	}
    	}

	}
