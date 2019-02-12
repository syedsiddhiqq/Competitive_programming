import java.util.*;
public class Matches{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int b = scan.nextInt();
		int[] arr1 = new int[b];
		int[] arr2 = new int[b];
		for(int i=0;i<b;i++){
			arr1[i]=scan.nextInt();
			arr2[i]=scan.nextInt();
		}
		int d=0;
		for(int i=0;i<b;i++){
			for(int j=0;j<b;j++){
				if(arr1[i]==arr2[j])
					d++;
			}
		}
		System.out.println(d);
	}
}
