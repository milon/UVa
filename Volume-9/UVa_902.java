//UVa Problem-902(Password Search)
//Accepted
//Running time: 1.984 sec

import java.util.Scanner;
import java.util.HashMap;
import java.util.Set;
import java.util.Map;
import java.util.Iterator;

public class UVa_902{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		while(input.hasNext()){
			int n = input.nextInt();
			String str = input.next();
			HashMap<String,Integer> suru = new HashMap<String,Integer>();
			for(int i=0;i<str.length()-n+1;i++){
				String sub = str.substring(i,i+n);
				if(suru.containsKey(sub))
					suru.put(str.substring(i,i+n),suru.get(sub)+1);
				else
					suru.put(str.substring(i,i+n),1);
				}
			Set milon = suru.entrySet();
			Iterator it = milon.iterator();
			String ret = new String();
			int max = Integer.MIN_VALUE;
			while(it.hasNext()){
				Map.Entry k = (Map.Entry)it.next();
				String key = (String)k.getKey();
				int val = (Integer)k.getValue();
				if(val>max){
					max=val;
					ret=key;
					}
				}
			System.out.println(ret);
			}
		}
	}
