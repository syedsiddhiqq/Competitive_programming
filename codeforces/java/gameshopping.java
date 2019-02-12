import java.util.*;
public class gameshopping{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    int n = scan.nextInt(),j=0,count=0;
    int m = scan.nextInt();
    int arr1[] = new int[n];
    int arr2[] = new int[m];
    for(int itr=0;itr<n;itr++)
      arr1[itr] = scan.nextInt();
      for(int itr=0;itr<m;itr++)
        arr2[itr] = scan.nextInt();

    for(int itr=0;itr<n && j<m;itr++){
      if(arr2[j] >= arr1[itr]){
        j++;count++;
      }
    }
    System.out.println(count);
  }
}
