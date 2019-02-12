import java.util.*;
public class Calfunction{
  public static void main(String args[]){
    Scanner scan = new Scanner(System.in);
    long n = scan.nextLong();
    System.out.println((n%2==0)?n/2:"-"+(n/2+1));
  }
}
