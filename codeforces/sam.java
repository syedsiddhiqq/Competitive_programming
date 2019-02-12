
import java.util.*;

public class sam{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int num = scan.nextInt(),temp;
    int arr[] = new int [101];
    for(int itr=1;itr<=num;itr++){
      temp = scan.nextInt();
      arr[temp] = itr;
    }
    for(int itr=1;itr<=num;itr++){
      System.out.print(arr[itr]+" ");
    }
  }
}
