import java.util.*;
public class Adjancent{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    for(int itr=0,n=scan.nextInt();itr<n;itr++){
      int temp = scan.nextInt();
      if(temp%2==0){
        System.out.print((temp-1)+" ");
      }else{
        System.out.print(temp+" ");
      }
    }
  }
}
