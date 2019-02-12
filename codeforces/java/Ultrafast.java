import java.util.*;
public class Ultrafast{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    String n1 = scan.next();
    String n2 = scan.next();
    for(int itr=0;itr<n1.length();itr++)
      System.out.print((n1.charAt(itr) == n2.charAt(itr))?"0":"1");
    }
}
