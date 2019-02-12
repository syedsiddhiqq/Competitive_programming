import java.util.*;
public class Iwannabetheguy{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int num = scan.nextInt();
    int flag=1;
    int arr[] = new int [num+1];
    int p = scan.nextInt();
    for(int itr=1;itr<=p;itr++){
      arr[scan.nextInt()]++;
    }
    int q = scan.nextInt();
    for(int itr=1;itr<=q;itr++){
      arr[scan.nextInt()]++;
    }
    for(int itr=1;itr<=num;itr++){
      if(arr[itr]==0){
        System.out.println("Oh, my keyboard!");
        flag=0;
        break;
      }
    }
    if(flag==1)
       System.out.println("I become the guy.");
  }
}
