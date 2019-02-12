/*
* @Author: SyedAli
* @Date:   2019-01-07 14:03:30
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-07 14:16:55
5
2 7 3 4 9
3
1 25 11
*/
import java.io.*;
import java.util.*;
public class Worms{
	 public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		List<Integer> li = new ArrayList<>();
		int n = sc.nextInt();
		int x,count=1;
		while(n--!=0){
			x = sc.nextInt();
			for(int i=0;i<x;i++){
				li.add(count);
			}
			count++;
		}
		int q = sc.nextInt();
		int y;
		while(q--!=0){
			y = sc.nextInt();
			y = y-1;
			System.out.println(li.get(y));
		}

	}
}